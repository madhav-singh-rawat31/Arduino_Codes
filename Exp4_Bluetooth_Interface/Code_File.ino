void setup() 
{
  Serial.begin(9600);
  pinMode(13,OUTPUT); 

}

void loop() 
{
  if(Serial.available())
  {
      int data = Serial.read();
      if(data=='1')
      {
          digitalWrite(13,HIGH);
      }
      if(data=='2')
      {
          digitalWrite(13,LOW);
      }
          
      delay(50);  
  }
