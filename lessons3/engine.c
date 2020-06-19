char ch=' ';
void setup()
{
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.println("ready");
}
void loop()
{digitalWrite(8,HIGH);
 digitalWrite(9,LOW);
  if(Serial.available()>0)
  {
  	ch=Serial.read();
    switch(ch)
    {
    case 'R':
      digitalWrite(5,HIGH);
      break;
    case 'G':
      digitalWrite(6,HIGH);
      break;
    case 'B':
      digitalWrite(7,HIGH);
      break;
    default:
      break;
    }
  }
}