int enbL=A3;
int enbR=A2;
int lf=10;
int lb=9;
int rf=11;
int rb=12;
int a=2;
int b=3;
int c=4;
int d=5;
void setup()
{
  Serial.begin(9600);
  pinMode(enbL,OUTPUT);
  pinMode(enbR,OUTPUT);
  pinMode(lf,OUTPUT);
  pinMode(lb,OUTPUT);
  pinMode(rf,OUTPUT);
  pinMode(rb,OUTPUT);
  pinMode(a,INPUT);
  pinMode(b,INPUT);
  pinMode(c,INPUT);
  pinMode(d,INPUT);
}
void loop()
{
  if(digitalRead(a)==LOW)
  {
    forward();
    Serial.println("a");
  }
  if(digitalRead(b)==LOW)
  {
    backward();
    Serial.println("b");
  }
  if(digitalRead(c)==LOW)
  {
    right();
    Serial.println("c");
  }
  if(digitalRead(d)==LOW)
  {
    left();
    Serial.println("d");
  }
  else 
  {
    stopp();
  }
}
void forward()
{
  analogWrite(enbL,255);
  analogWrite(enbR,255);
  digitalWrite(lf,HIGH);
  digitalWrite(lb,LOW);
  digitalWrite(rf,HIGH);
  digitalWrite(rb,LOW);
}
void backward()
{
  analogWrite(enbL,255);
  analogWrite(enbR,255);
  digitalWrite(lf,LOW);
  digitalWrite(lb,HIGH);
  digitalWrite(rf,LOW);
  digitalWrite(rb,HIGH);
}
void right()
{
  analogWrite(enbL,255);
  analogWrite(enbR,0);
  digitalWrite(lf,HIGH);
  digitalWrite(lb,LOW);
  digitalWrite(rf,LOW);
  digitalWrite(rb,LOW);
}
void left()
{
  analogWrite(enbL,0);
  analogWrite(enbR,255);
  digitalWrite(lf,LOW);
  digitalWrite(lb,LOW);
  digitalWrite(rf,HIGH);
  digitalWrite(rb,LOW);
}
void stopp()
{
  analogWrite(enbL,0);
  analogWrite(enbR,0);
  digitalWrite(lf,LOW);
  digitalWrite(lb,LOW);
  digitalWrite(rf,LOW);
  digitalWrite(rb,LOW);
}
