#include <LiquidCrystal.h>
int tempVal = A2; 
int fan = 13; 

int AmbSen = 0;
int outdoor = 5;

long distance; 
int duration;

int Burglar = 0;

int trig=7;
int echo=6;

LiquidCrystal lcd(12, 11, 9, 8, A3, A4);
//int count = 0;     

void setup()
{
  Serial.begin(9600);
  pinMode(fan, OUTPUT); 
  pinMode(outdoor, OUTPUT); 
  pinMode(tempVal, INPUT); 
  pinMode(A0, INPUT);
  pinMode(4, INPUT);
  pinMode(A5, OUTPUT);
   pinMode(2, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(6, INPUT);
  attachInterrupt(digitalPinToInterrupt(3),stop,CHANGE);
}

void loop()
{
//  quakeState = digitalRead(quakePin);
//  autoswitcher(); 
    // Temperature Controoled Fan 
  float temp = analogRead(A2);    //Read the analog pin
  temp = (temp * 0.48828125) - 49;   // convert output (mv) to readable celcius
  lcd.clear();
  lcd.print("Temperature: ");
  Serial.print("Temperature: ");
  Serial.print(temp);
  lcd.print(temp);
  Serial.println(" C");  //print the temperature status
  lcd.println(" C");
  delay(100); 
  
  if(temp > 28)
  {
    digitalWrite(fan, HIGH);
    delay(100);
  }
   else if((temp > 23) && (temp < 28))
  {
    digitalWrite(fan, HIGH);
    delay(100);
  }
  else
  {
    digitalWrite(fan, LOW);
      Serial.print("Temperature: ");
     delay(100);
  }  

// Automated Outdoor Light 
AmbSen = analogRead(A0);
  Serial.println(AmbSen);
  if(AmbSen < 400)
  {    
    
    digitalWrite(outdoor, HIGH);
    delay(100);
  }
  else
  {    
    digitalWrite(outdoor, LOW);
    delay(100);
  }

  // Burglar Detection 
  Burglar = digitalRead(4);
  if(Burglar == HIGH)
  {
    digitalWrite(A5, HIGH);
    delay(10000);
  }
  else
  {
    digitalWrite(A5, LOW);
    delay(100);
  }
      

  // Water Level Monitoring 
 digitalWrite(7,HIGH);
 digitalWrite(7,LOW);
 duration=pulseIn(echo,HIGH);
 distance=duration*(0.034/2);
   if(distance>100)
{
 digitalWrite(2,HIGH);  
 delay(100);
}
  else
  {
    digitalWrite(2,LOW);  
    Serial.println(distance);
    delay(100);
  }
}


void stop()
{
  digitalWrite(A5,LOW);
  Serial.println(distance);
  delay(100);
 }
