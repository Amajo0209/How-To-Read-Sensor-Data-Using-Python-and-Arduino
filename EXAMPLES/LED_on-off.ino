void setup() {

  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("Type 'On' to turn on the LED and 'Off' to turn off ");

}

void loop() {

  if (Serial.available()){
    String input = Serial.readString();

    if (input == "On"){
      digitalWrite(13, HIGH);
    } else if (input == "Off"){
      digitalWrite(13, LOW);
    }
  }
  
}
