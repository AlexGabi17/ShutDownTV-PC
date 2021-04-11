import serial
import os
ser = serial.Serial("COM3", 9600)
while True:
     cc=str(ser.readline())
     x=cc[2:][:-5]
     if x == "shut down":
        os.system("shutdown /s /t 1")