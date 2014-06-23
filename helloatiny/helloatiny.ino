

void setup()
{
  pinMode(6,OUTPUT);
  pinMode (8,INPUT);
}

void loop()
{
  int button= digitalRead(8);
  
  if (button==HIGH)
    {
      digitalWrite(6,LOW);
    }else{
            digitalWrite(6,HIGH);
          }
}
