#include <LPC21xx.h>
#include "defines.h"
#include "lcd.h"
#include "lcd_defines.h"
#include "kpm.h"
#include "rtc.h"
#include "delay.h"
#include "edit.h"
#include "pindefines.h"
s32 M_HOUR=10,M_MIN,M_SEC;
s32 hour,min,sec,date,month,year,day;
u8 medicine_taken=0;
s8 last_alert_min=-1;
u8 alert_active=0;
int main()
{
        u8 choice;
        IODIR0 |= 1<<LED;
        IODIR0 |= 1<<BUZZER;         //for setting BUZZER and LED as output direction
//IntLCD(1);
        RTC_Init();
        InitLCD();
        KeyadInit();
        while(1)
        {
                  //CmdLCD(CLEAR_LCD);
                  Diplay();
                        if((((IOPIN0>>SW1)&1)==0))
                                {
                                          Disp_menu();
                                                WRITENIBBLE(IOPIN1,16,0);//rows are cleared
                                                while(ColStat()); //waiting for key press
            choice=ReadKeyVal();
                                        switch(choice)
                                                {
                                                                case '1':CmdLCD(CLEAR_LCD);
                                                                               edit_RTC();
                                                                                                  break;
                                                                case '2':CmdLCD(CLEAR_LCD);
                                                                               edit_MED(&M_HOUR,&M_MIN,&M_SEC);//for setting medicine time
  break;
                                                                case '3': CmdLCD(CLEAR_LCD);
                                                                                                        break;
                                                          default:CmdLCD(CLEAR_LCD);
                                                                                                StrLCD("WRONG INPUT");
                                                                   delay_s(30);
                                                                               CmdLCD(CLEAR_LCD);
                                                }
                                        }
                                        if(min!=last_alert_min)
                                        {
                                          medicine_taken=0;
                                          alert_active=0;

                                        }

              if(((hour==M_HOUR)&&(min==M_MIN)&&(medicine_taken==0)))
          {
              u32 timeout=0;
                          last_alert_min=min;
                          alert_active=1;
                          CmdLCD(CLEAR_LCD);
              Diplay_medicine_time();
              SETBIT(IOSET0,BUZZER); // turn on buzzer


    while(timeout<1000)
    {
        delay_ms(10);
        timeout++;
        if((((IOPIN0>>SW2)&1)==0)&& alert_active)// SW2 pressed (active low)
        {
                                    medicine_taken=1;
                                        alert_active=0;
                                    SETBIT(IOCLR0,BUZZER);       // turn off buzzer
                                                SETBIT(IOCLR0,LED);
            CmdLCD(CLEAR_LCD);
            CmdLCD(GOTO_LINE1_POS0);
            StrLCD("MEDICINE TAKEN");
            delay_s(2); // show message 2 sec
CmdLCD(CLEAR_LCD);
            break;
        }
    }

    if((timeout>=1000)&&(medicine_taken==0))
    {
        medicine_taken=1;
        alert_active=0;

                                SETBIT(IOCLR0,BUZZER);
                                SETBIT(IOSET0,LED);    // turn on LED
                                 Disp_medicine_fail(); // show failed message
                delay_s(2);
                                CmdLCD(CLEAR_LCD);
    }
      }
    }
 }
