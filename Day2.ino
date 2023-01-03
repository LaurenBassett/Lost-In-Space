int Light = 11 ; 

void setup() {
  // put your setup code here, to run once:
pinMode(Light,OUTPUT);
digitalWrite(Light,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Light, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(2000);                      // wait for a second
  digitalWrite(Light, LOW);   // turn the LED off by making the voltage LOW
  delay(2000);  
  digitalWrite(Light, HIGH);
  delay(500);                      // wait for a second
  digitalWrite(Light, LOW);   // turn the LED off by making the voltage LOW
  delay(500);

}