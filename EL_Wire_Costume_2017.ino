
int Relay1 = 7;
int Relay3 = 6;
int Relay2 = 5;
int Relay4 = 4;

void setup() {
  
  pinMode(Relay1, OUTPUT);
  pinMode(Relay2, OUTPUT);
  pinMode(Relay3, OUTPUT);
  pinMode(Relay4, OUTPUT);
/*
digitalWrite(Relay1, LOW);  
  digitalWrite(Relay2, LOW); 
  digitalWrite(Relay3, LOW); 
  digitalWrite(Relay4, LOW);   
  delay(10000);
  */
}
void loop() {
  
  digitalWrite(Relay1, HIGH); 
  delay(125);  
  digitalWrite(Relay2, HIGH);
  delay(150);
  digitalWrite(Relay3, HIGH);
  delay(175);
  digitalWrite(Relay4, HIGH);
  delay(200);                       
  digitalWrite(Relay1, LOW);
  delay(200);  
  digitalWrite(Relay2, LOW);
  delay(175); 
  digitalWrite(Relay3, LOW);
  delay(150);
  digitalWrite(Relay4, LOW);   
  delay(125);
  
  






                         
}
