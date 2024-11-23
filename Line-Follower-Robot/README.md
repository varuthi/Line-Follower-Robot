Line Follower Robot

Overview  
This project demonstrates the design and implementation of a line follower robot using an Arduino, IR sensors, and DC motors. The robot autonomously follows a predefined path and handles sharp turns effectively.

Key Features  
\- Real-time line detection using a 5-array IR sensor.  
\- Smooth movement control with DC motors and an L298N motor driver.  
\- Designed for educational and demonstration purposes in robotics.

| Component  | Quantity  | Description  |
| :---: | :---: | :---: |
| Arduino Uno  | 1 | Microcontroller for processing sensor data and controlling motors |
| 5-Array IR sensor  | 1  | Used for detecting the path (line) on the surface |
| DC Motors  | 2 | Motors to drive the wheels |
| L298N Motor Driver | 1 | Motor driver for controlling the speed and direction of motors |
| 12V Battery  | 1  | Power Source for the motors and Arduino  |
| Wheels  | 2 | Wheels for mobility  |
| Chassis  | 1 | Structure holding all components together  |
| Jumper Wires  | \- | For circuit connections  |

Software  
The robot is programmed using the Arduino IDE in C/C++. You can find the full code in the \`Code\` folder.

How to Build  
1\. Assemble the hardware components as shown in the circuit diagram.  
2\. Upload the provided code to the Arduino Uno using the Arduino IDE.  
3\. Place the robot on a track with a visible black line and test.

Results  
\- Successfully navigates straight and curved paths.  
\- Capable of handling sharp turns with optimized motor control logic.

 Future Enhancements  
\- Incorporate PID control for smoother navigation.  
\- Design a custom PCB for compactness and efficiency.  
\- Use higher RPM motors for improved speed.

Documentation  
Detailed documentation is available (Documentation/line\_follower\_documentation.pdf).

License  
This project is licensed under the MIT License # Line-Follower-Robot
# Line-Follower-Robot
