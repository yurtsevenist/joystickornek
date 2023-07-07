int xdeger;
int ydeger;
int xderece;
int yderece;
int ledsag=12, ledsol=10,ledileri=11,ledgeri=13 ;
void setup() {
  pinMode(ledileri,OUTPUT);
  pinMode(ledgeri,OUTPUT);
  pinMode(ledsag,OUTPUT);
  pinMode(ledsol,OUTPUT);
}
void loop() {
  xdeger = analogRead(A0);
  ydeger = analogRead(A0);
  xderece = map(xdeger, 0, 1023, 0, 180);
  yderece = map(ydeger, 0, 1023, 0, 180);
  motor.write(derece);
  if(xderece>=0 and xderece<80)
  {
    digitalWrite(ledsol,HIGH);
    digitalWrite(ledsag,LOW);
    digitalWrite(ledileri,LOW);
    digitalWrite(ledgeri,LOW);    
  }
  else if(xderece>100 and xderece<=180)
  {
    digitalWrite(ledsag,HIGH);
    digitalWrite(ledsol,LOW);
    digitalWrite(ledileri,LOW);
    digitalWrite(ledgeri,LOW);
  }
  else
  {
    digitalWrite(ledsol,LOW);
    digitalWrite(ledsag,LOW);
    digitalWrite(ledileri,LOW);
    digitalWrite(ledgeri,LOW);
  }
    if(yderece>=0 and yderece<80)
  {
    digitalWrite(ledsol,LOW);
    digitalWrite(ledsag,LOW);
    digitalWrite(ledileri,LOW);
    digitalWrite(ledgeri,HIGH);    
  }
  else if(yderece>100 and yderece<=180)
  {
    digitalWrite(ledsag,LOW);
    digitalWrite(ledsol,LOW);
    digitalWrite(ledileri,HIGH);
    digitalWrite(ledgeri,LOW);
  }
  else
  {
    digitalWrite(ledsol,LOW);
    digitalWrite(ledsag,LOW);
    digitalWrite(ledileri,LOW);
    digitalWrite(ledgeri,LOW);
  }
  
}