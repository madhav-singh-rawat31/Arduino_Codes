
  
long duration;
int distance;
void setup()
{
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(echoPin,INPUT);
}
 
void loop()
{
  digitalWrite(10,LOW);
  delayMicroseconds(2);
  
  digitalWrite(10,HIGH);
  delayMicroseconds(10);
  
  digitalWrite(10,LOW);
  duration = pulseIn(9,HIGH);
  
  distance = duration/58.2;
  
  Serial.println(distance);
  Serial.println("cm");
  
  delay(50);
}
