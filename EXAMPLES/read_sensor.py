import serial

Arduino = serial.Serial('COM8',9600)

while True:
    if (Arduino.inWaiting()>0):
        myData = Arduino.readline()
        print(myData)
