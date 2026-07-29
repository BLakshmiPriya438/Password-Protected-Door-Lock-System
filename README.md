# Password Protected Door Lock System

## Overview
This project implements a password-protected door lock system using Arduino UNO. A 4x4 keypad is used to enter a password, a 16x2 LCD displays system messages, and a servo motor acts as the door lock mechanism.

## Components Used
- Arduino UNO
- 4x4 Matrix Keypad
- 16x2 LCD Display
- Servo Motor
- Jumper Wires
- Resistors

## Technologies Used
- Embedded C
- Arduino IDE

## Features
- Password-based authentication
- Hidden password entry using '*'
- Automatic door unlocking on correct password
- LCD status display
- Servo motor-based locking mechanism

## Working
The user enters a four-character password using the keypad. Each key press is displayed as '*' on the LCD for security. If the entered password matches the stored password, the servo motor rotates to unlock the door for a few seconds before locking it again. If the password is incorrect, the LCD displays an error message.

## Learning Outcomes
- Keypad interfacing
- LCD interfacing
- Servo motor control
- Password validation
- Embedded C programming

## Applications
- Smart Door Locks
- Home Security Systems
- Office Access Control
- Locker Security

## Author
Bheemisetti Lakshmipriya
