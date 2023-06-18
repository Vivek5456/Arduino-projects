char incomingChar;
void setup(){
  Serial.begin(9600);

}

void loop(){
  if(Serial.available()>0){
    incomingChar=Serial.read();
    Serial.print("The Arduino Received :");
    Serial.println(incomingChar);
  }

}