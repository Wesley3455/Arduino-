
const int pinled1 = 8;
const int pinled2 = 9;
const int pinled3 = 10;

int estadopinled1 =0;
int estadopinled2 =0;
int estadopinled3 =0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinled1,INPUT);
  pinMode(pinled2,INPUT);
  pinMode(pinled3,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(estadopinled1,HIGH){  
  }
  else{
   digitalWrite(pinled1,LOW); 
  }
  if(pinled2,HIGH){
  }
  else{
  digitalWrite(pinled2,LOW); 
  }
  if(pinled3,HIGH){
  }
   else{
   digitalWrite(pinled3,LOW);
   }
}//llave del loop
