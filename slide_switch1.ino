// C++ code
//
const int pin1=2,pin2=3;
void setup()
{
 pinMode(LED_BUILTIN, OUTPUT);
 pinMode(pin1,INPUT);
 pinMode(pin2,INPUT);
}

void loop()
{
  if(digitalRead(pin1)==1){
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
  }else{
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  }
  if(digitalRead(pin2)==1){
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
  }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  }
    
}