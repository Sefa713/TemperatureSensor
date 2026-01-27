<img width="1272" height="584" alt="Temperature Sensor" src="https://github.com/user-attachments/assets/5bae3fd9-f44e-4ec1-87e4-36c1b0224b11" />

Arduino Temperature Monitor & Alert SystemProject 

Overview: This is one of my first few projects as I learn about Embedded Systems. 
I wanted to build something, I thought would be practical and could feasibily be used in a real-world scenario.
Such as monitoring heat levels for sensitive electronics or a small workspace. While the design is rudimentary, it has helped me gain a better feel for how 
hardware and software interact. I am excited about the progress I’m making as I move toward more complex PID control and Signal Processing projects.
Here are some of the Features of the Sensor:
1. Real-time LCD Output: Displays status messages based on current thermal conditions.
2. Multi-level Thresholding:
Safe Zone (10 degree celsius - 40 degree celsius): Basic monitoring status.
   
Warning Zone (40 degree celsius - 70 degree celsius): Visual alert indicating rising temperatures.

Critical Alert (above 70 degree celsius): Triggers a "Dangerous Heat" warning with a synchronized visual/audible alarm (Digital Pins 6 and 13).

Precision Calculation: Implements a custom function to convert raw analog voltage to Celsius based on sensor characteristic from its data sheet.
   
Implementation Hardware: Arduino Uno, 16x2 LCD Display (LiquidCrystal library), TMP36 Temperature Sensor, an LED ,and a Vibration motor.

Concepts Learned : Analog-to-Digital Conversion (ADC), Voltage-to-Temperature mapping, and State Logic.
