int relayPin = 13;
int sensorAmb = A0;
int Sensor_value = 0;
void setup()
{
  pinMode(relayPin, OUTPUT);
  pinMode(sensorAmb, INPUT);
  Serial.begin(9600);
}

void loop()
{
  Sensor_value = analogRead(sensorAmb);
  if(Sensor_value>800)
  {
    digitalWrite(relayPin, HIGH);
    delay(300);
  }
    else{
      digitalWrite(relayPin, LOW);
      delay(300);
  }
}