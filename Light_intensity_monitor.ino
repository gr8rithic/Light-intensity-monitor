void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(7,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
  int val=analogRead(A0);
  if(val>=300)
  {
    Serial.println("The intensity is High");
    Serial.println(val);
    digitalWrite(7,HIGH);
  }
  else if(val<=300 && val>=50)
  {
    Serial.println("The intensity is medium");
    Serial.println(val);
    digitalWrite(7,HIGH);
    delay(200);
    digitalWrite(7,LOW);
    delay(200);
  }
  else
  {
    Serial.println("The intensity is low");
    Serial.println(val);
    digitalWrite(7,LOW);
    
  }
     
}
