// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);

}

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(12, OUTPUT);  // Clear the trigger
  digitalWrite(12, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(12, HIGH);
  delayMicroseconds(10);
  digitalWrite(12, LOW);
  pinMode(11, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
 
  return pulseIn(11, HIGH);
}



void loop()
{
  int level = 0.01723 * readUltrasonicDistance(12,11);
  Serial.print(" The water level is  ");
  Serial.println(level);
  if( level > 99){
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
    Serial.println("Tank is almost empty");
    delay(100);
  }
  else if ( level > 80){
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
    Serial.println("Tank is 20 percent full");
    delay(100);
  }
  else if (level > 60){
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
    Serial.println("Tank is 50ercent full");
    delay(100);
  }
  else if (level > 40){
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(3,LOW);
        Serial.println("Tank is 70 percent full");
    delay(100);
  }
  else if (level > 30){
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(3,HIGH);
        Serial.println("Tank is alost full");
    delay(100);
  }
  else 
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
        Serial.println("No information about level");
    delay(100);

}