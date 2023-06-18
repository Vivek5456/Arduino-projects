void setup(){
  pinMode(A1, INPUT);
  pinMode(10, OUTPUT);
}

void loop(){
  int Potvalue= analogRead(A1);
  Serial.begin(9600);
  if(Potvalue>500){
    Serial.println(Potvalue);
    digitalWrite(10, HIGH);
    delay(100);  
  }
  else{
    Serial.println(Potvalue);
    digitalWrite(10, LOW);
    delay(100);
  }

}