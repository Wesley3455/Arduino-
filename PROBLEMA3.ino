const int  pinled1 = 8;

const int  pinBoton1 = 9;
const int  pinBoton2 = 5,

int estadoBoton1 = 0;
int estadoBoton2 = 0;



void setup() {
  // put your setup code here, to run once:
  pinMode(pinBoton1,OUTPUT)
  pinMode(pinBoton2,OUTPUT)
  pinMode(pinled1,INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
    estadoBoton1 = digitalRead(pinBoton2);  
       
 if (estadoBoton1 = digitalRead){
  
 }
   digitalWrite(pinled1,HIGH);
 else{
    digitalWrite(pinled1,LOW);
  
  
 }
}
