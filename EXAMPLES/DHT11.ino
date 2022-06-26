#include <dht.h>

dht DHT;

const int dhtPin = 6;

void setup() {

  Serial.begin(9600);

}

void loop() {

D: int chk = DHT.read11(dhtPin);
  switch (chk) {
    case DHTLIB_OK:
      break;

    case DHTLIB_ERROR_CHECKSUM:
      //Serial.print("Checksum error, \t");
      break;

    case DHTLIB_ERROR_TIMEOUT:
      goto D;
      //Serial.print("Time out error, \t");
      break;

    default:
      //Serial.print("Unknown error, \t");
      break;
  }

  //DISPLAYING DATA

  Serial.print("TEMPERATURE: ");
  Serial.print(DHT.temperature, 1);
  Serial.println("ºC");

  Serial.print("HUMIDITY: ");
  Serial.print(DHT.humidity, 1);
  Serial.println("%");

  Serial.println("");
  delay(5000);

}
