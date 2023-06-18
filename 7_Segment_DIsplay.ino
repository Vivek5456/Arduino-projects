
void setup(void)
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}



void zero(void) {
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
}

void one(void) {
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
}

void two(void) {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
}

void three(void) {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
}

void four(void) {
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
}

void five(void) {
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
}

void six(void) {
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
}

void seven(void) {
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
}

void eight(void) {
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
}

void nine(void) {
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
}


void loop(void)
{
  zero();
  delay(1000);
  
  one();
  delay(1000);
  
  two();
  delay(1000);
  
  three();
  delay(1000);
  
  four();
  delay(1000);
  
  five();
  delay(1000);
  
  six();
  delay(1000);
  
  seven();
  delay(1000);
  
  eight();
  delay(1000);
  
  nine();
  delay(1000);
}