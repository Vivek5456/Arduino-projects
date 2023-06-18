int sensorValue = 0;
int tempVal = A2; 
int quakePin = 4; 
int quakeState = 0;
int MQ2pin = A3;
const int gas = 0;
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 7, 3, 10);
const int switchPin = 2;
int count = 0;     
int switchstate = 0;     

void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(switchPin, INPUT);    
}

void loop()
{
  quakeState = digitalRead(quakePin);
  autoswitcher(); 
}


void brightness()
{ 
 int value = analogRead(A0);
  Serial.println(value);
  if (value <= 600) {
    Serial.println("It's Dark");
     lcd.println("It's Dark");
   }
  if ((value > 600) && (value <= 700)) {
    Serial.println("Comfortable light ");
     lcd.println("Comfortable light");
   }
  if ((value > 700) && (value <= 800)) {
    Serial.println("Noon Brightness");
        lcd.println("Noon Brightness");
  }
  if ((value > 800)) {
    Serial.println("Way too bright");
        lcd.println("Way too bright");
  }
  delay(100); 
}


void temp()
{
  float temp = analogRead(A2);    //Read the analog pin
  temp = (temp * 0.48828125) - 49;   // convert output (mv) to readable celcius
  Serial.print("Temperature: ");
  	lcd.print("Temperature: ");
  Serial.print(temp);
      lcd.print(temp);
  Serial.println("C");  //print the temperature status
      lcd.println("C");
  delay(100);  
}
	

void quake()
{
  // read the state of the tilt sensor value:
  quakeState = digitalRead(quakePin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (quakeState == LOW) {
    Serial.println("Earthquake");
    lcd.print("Earthquake");
  } else {
    Serial.println("Not earthquake");
    lcd.print("Not Earthquake");
  } 
  delay(100);
}


void gass()
{
   int sensorValue;
   sensorValue = analogRead(A3); // read analog input pin 0

  if(sensorValue >= 400){
    lcd.print(sensorValue);
    lcd.println(" |SMOKE DETECTED");  
    Serial.print(sensorValue);
    Serial.println(" |SMOKE DETECTED");
  }
  
  else{
    lcd.print("Gas Value = ");
    lcd.println(sensorValue);
    Serial.print("Gas Value = ");
    Serial.println(sensorValue);
  } 
  delay(100);
}

void autoswitcher(){
  
  lcd.print("Cycle Mode");
  delay(1000); 
  lcd.clear();
 
    count++;// add 1 to the count
  
    if (count >= 2) {
      brightness();
      delay(1000);
      lcd.clear();
      count++;
    } 
    
   
    if (count >= 3) {
      temp();
      delay(1000);
      lcd.clear();
      count++;
    } 
    
      if (count >= 4) {
      gass();
      delay(1000);
      lcd.clear();
      count++;
    } 
    
    if (count >= 5) {
      quake();
      delay(1000);
      lcd.clear();
      count++;
      
      if (count >= 6) {
      lcd.clear();
      count = 2; 
    } 
  }
}