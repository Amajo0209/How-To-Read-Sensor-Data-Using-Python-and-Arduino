import serial # use 'pip install pyserial' to install the lib

ArduinoSerial = serial.Serial('COM8', 9600)

def LED(data):
    if 'On' in data:
        ArduinoSerial.write(b'On')
    elif 'Off' in data:
        ArduinoSerial.write(b'Off')

while True:
    print("Type 'On' to turn on the LED and 'Off' to turn off")
    data = input("")
    LED(data)
