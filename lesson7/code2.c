int pinInterrupt=2;
void myfunc()
{digitalWrite(7,LOW);
  }
 
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  digitalWrite(7,HIGH);
  attachInterrupt(digitalPinToInterrupt(pinInterrupt), myfunc, CHANGE);
}
 byte income=0;
void loop()
{for(income=0;income<=9;income++)
{income-='0';
  digitalWrite(3,income&0x1);
    digitalWrite(4,(income>>1)&0x1);
    digitalWrite(5,(income>>2)&0x1);
    digitalWrite(6,(income>>3)&0x1);
  	delay(10);
 if(income==9)
   income=0;
 }
}

