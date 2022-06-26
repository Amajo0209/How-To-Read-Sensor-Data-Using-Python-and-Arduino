import serial
import time
import schedule
#arduino = serial.Serial('COM3',9600)

def dht():
    arduino = serial.Serial('COM3',9600);
    print("Established serial connection to Arduino")
    arduino_data = arduino.readline()
    decoded_values = str(arduino_data[0:len(arduino_data)].decode("utf-8"))
    list_values = decoded_values.split('x')

    for item in list_values:
        list_in_floats.append(str(item))
    
    print(f'collected readings from Arduino: {list_in_floats}')

    arduino_data=0
    list_in_floats.clear()
    list_values.clear()
    #arduino.close()
    print('Connection closed')
    print('<---------------->')

#MAIN CODE

list_values = []
list_in_floats = []

print('Program started')

schedule.every(5).seconds.do(dht)

while True:
    schedule.run_pending()
    #time.sleep(1)
    

