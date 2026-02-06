# Smart Medicine Reminder System using LPC2148(Proteus)

## Project Description
The Smart Medicine Reminder System is an embedded system project built using the LPC2148 ARM7 microcontroller. It helps users manage medication schedules by providing timely reminders using an RTC-based alert system. The project uses a 16×2 LCD for display, a keypad for setting medicine timings, and buzzer & LED indicators for alerts. The system ensures users never miss their medication schedule. The entire project is simulated in Proteus for academic and learning purposes.

## 🧠Key Features

⏰ Real-Time Clock (RTC) based time tracking

📟 16×2 LCD display for messages

🔢 4×4 Matrix Keypad for user input

🔔 Buzzer alert at medicine time

💡 LED warning and status indication

✅ Medicine taken confirmation

❌ Missed medicine detection

🧩 Menu-driven interface

## 🛠️ Hardware Components (Proteus)

🔹LPC2148 ARM7 Microcontroller

🔹16×2 Alphanumeric LCD

🔹4×4 Matrix Keypad

🔹Active Buzzer

🔹Red LED

🔹Push Buttons

🔹1kΩ Resistors

🔹3.3V / 5V Power Supply

## 🧪 Software Tools Used

🖥️ Proteus Design Suite (Simulation)

🧑‍💻 Keil µVision (Embedded C)

🗂️ GitHub (Version Control)

## 🖼️ Proteus Simulation Screens & Explanation

## 1️⃣ LCD Interface & Pin Test

🔹Displays test characters on LCD

🔹Verifies D0–D7 data line connections

🔹Confirms LCD works in 8-bit mode ✅

## 2️⃣ RTC Date & Time Display




🔹 Shows current time in HH:MM:SS format

🔹Displays date and day (DD/MM/YYYY)

🔹RTC runs continuously ⏳

## 3️⃣ Main Menu Screen



🔹Menu navigation using keypad

🔹User-friendly interface 🧭

## 4️⃣ Time & Medicine Setup Menu



1: HR 2: MN 3: SC 4: MED_T 5: EXIT

🔹Set hours, minutes, seconds

🔹Configure medicine reminder time ⏰

## 5️⃣ Medicine Time Alert



🔹LCD shows MEDICINE TIME

🔹Buzzer turns ON 🔔

🔹LED glows for attention 💡

## 6️⃣ Take Medicine Alert




🔹LCD displays TAKE MEDICINE

🔹System waits for user confirmation

🔹Switch press confirms intake ✅

## 7️⃣ Medicine Taken Confirmation



🔹LCD shows MEDICINE TAKEN

🔹Buzzer turns OFF 🔕

🔹LED turns OFF

🔹Successful confirmation 🎉

## 8️⃣ Failure to Take Medicine


🔹Triggered if switch is not pressed ❌

🔹LCD shows FAILED TO TAKE MEDICINE

🔹Warning LED remains ON 🚨

## 🔁 Working Flow

1. Power ON the system 🔌

2. RTC starts time counting ⏱️

3. User sets medicine time via keypad

4. RTC compares with medicine time

5. Alert triggers at match

6. User confirms medicine intake

7. Status is displayed on LCD

## 🎯 Applications

👴 Elderly care systems

🏥 Hospital medicine reminders

🏠 Home healthcare automation

🎓 Embedded systems learning

## 🚀 Future Enhancements

📲 GSM/SMS alerts to caretaker

💾 EEPROM data storage

📱 Mobile app integration

🔋 Battery backup support

## 👨‍💻 Author

### RELLA NITHIN
🎓 ECE Student | Embedded Systems Enthusiast
💡 Interested in ARM, Embedded C & IoT

## ⭐ Support
If you like this project:

⭐ Star this repository

🍴 Fork it

🛠️ Contribute improvements

Happy Coding! 🚀
