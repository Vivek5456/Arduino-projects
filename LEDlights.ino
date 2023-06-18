void setup(){
  for(int pinNum =9; pinNum<=11;pinNum++){
    pinMode(pinNum,OUTPUT);
  }
}
void loop(){
  for(int pinNum =9; pinNum<=11;pinNum++){
    digitalWrite(pinNum, HIGH);
    delay(1000);
  }

  for (int pinNum =11; pinNum>=9; pinNum--){
    digitalWrite(pinNum, LOW);
    delay(1000);
  }
  
}