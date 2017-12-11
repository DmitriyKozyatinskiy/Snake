int btnLPin = 2;//Define digital 2 pin connect the left button
int btnRPin = 3;//Define digital 3 pin connect the left button

int ledPin = 12;
int ledPins [] = { 7,8,9 };

int Lval = 0;
int Rval = 0;


void setup() { 
  // Start the serial port, baud rate to 9600
  Serial.begin(9600); 
  pinMode(btnLPin,INPUT_PULLUP);//Set btnLPin input and pull up module
  pinMode(btnRPin,INPUT_PULLUP);//Set btnRPin input and pull up module
  pinMode(ledPin, OUTPUT);
  digital_0();
} 
  
void loop() {
  if(Serial.available()) { 
    digitalWrite(ledPin, HIGH);
    int score = Serial.read();
    switch(score) {
      case 1: digital_1(); break;
      case 2: digital_2(); break;
      case 3: digital_3(); break;
      case 4: digital_4(); break;
      case 5: digital_5(); break;
      case 6: digital_6(); break;
      case 7: digital_7(); break;
      case 8: digital_8(); break;
      case 9: digital_9(); break;
      case 12: digitalWrite(ledPin, HIGH); break;
    } 
    // digitalWrite(ledPinRead, HIGH);
  }

  if(Serial.available()) {
    int command = Serial.read();
    if (command == ledPin) {
      digitalWrite(ledPin, HIGH);
    }
  }
  
  // Read the button information
  int Lval = digitalRead(btnLPin);
  int Rval = digitalRead(btnRPin);
  
  Serial.print(Lval);//Send Lval
  Serial.print(',');
  Serial.print(Rval);//Send Rval
  Serial.println(','); 
  delay(100);         //Delay 100ms
} 



int a=7; //definition digital 7  pins as pin to control 'a' section(segment)
int b=6; //definition digital 6  pins as pin to control 'b' section(segment)
int c=4; //definition digital 4  pins as pin to control 'c' section(segment)
int d=11;//definition digital 11 pins as pin to control 'd' section(segment)
int e=10;//definition digital 10 pins as pin to control 'e' section(segment)
int f=8; //definition digital 8  pins as pin to control 'f' section(segment)
int g=9; //definition digital 9  pins as pin to control 'g' section(segment)
int dp=5;//definition digital 5  pins as pin to control 'dp' section(segment)
void digital_0(void) //Segment display digital 0
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g, LOW);
  digitalWrite(dp,LOW);
}
void digital_1(void) //Segment display digital 1
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}
void digital_2(void) //Segment display digital 2
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_3(void) //Segment display digital 3
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_4(void) //Segment display digital 4
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_5(void) //Segment display digital 5
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_6(void) //Segment display digital 6
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);  
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_7(void) //Segment display digital 7
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);  
  digitalWrite(c,HIGH);  
  digitalWrite(d,LOW); 
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}
void digital_8(void) //Segment display digital 8
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
void digital_9(void) //Segment display digital 9
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
