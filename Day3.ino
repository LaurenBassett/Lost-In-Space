int Light = 12 ; 
int Switch1 = 23; 
void setup() {
  // put your setup code here, to run once:
pinMode(Light,OUTPUT);
pinMode(Switch1, INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
 //now within loop() we'll take actions based on the status of the input switch
 
//this is a conditional test...
 
  if (digitalRead(Switch1) == HIGH){
  digitalWrite(Light, HIGH);   
 }
 else {
  digitalWrite(Light, LOW); // turn Light OFF
 }
}
 
