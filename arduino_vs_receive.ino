int led = 13;
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
  if (Serial.available())
    {
      int data = Serial.read();
      if(data == 'A')
        digitalWrite(led,HIGH);
      if(data == 'B')
        digitalWrite(led,LOW); 
    }
}

