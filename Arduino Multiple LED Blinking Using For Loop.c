int i;
void setup()
{    for(i=13;i>=6;i--)
    {	 pinMode(i, OUTPUT);
    }
}
void loop()
{
  for(i=13;i>=6;i--)
  { 	digitalWrite(i,1);
  }
  	delay(1000);
  for(i=13;i>=6;i--)
  { 	digitalWrite(i,0);
  }
 delay(1000);
}
