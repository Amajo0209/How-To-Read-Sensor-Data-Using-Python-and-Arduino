#include <NewPing.h>

#define Trig 3
#define Echo 2

#define Max_Distance 400 //400-550 (cm)

NewPing sonar(Trig, Echo, Max_Distance);

void setup() {

  Serial.begin(9600);
  Serial.println("The Distance from the sensor:");
  
}

void loop() {

  delay(100);
  unsigned int uS = sonar.ping();
  Serial.print("Distance: ");
  Serial.print(uS/US_ROUNDTRIP_CM);

  Serial.println("cm");
  
}
