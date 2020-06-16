int i=0;
void setup()
{ for (i=0;i<8;i++)
  pinMode(i,OUTPUT);}

void loop()
{int j=0;
while(1)
 {if(j%2==0)
  j=j+1;
 else
   j=j-1;
   i=j-2;
 while(i<=8)
{   i=i+2;
    digitalWrite(i, HIGH);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(i, LOW);
 delay(200); // Wait for 200 millisecond(s)
}}}