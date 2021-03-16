/*
*  Documentación del programa 
*  Autore:wesley barbsa
*  Fecha:16/03/2021
*  Código referencia:()
*  Descripción del programa:Utilizando el potenciómetro y los 3 leds deseo que los leds se enciendan en función de la posición del potenciómetro de la siguiente forma:
*  Hardware necesario:
*/
const int pinled1 = 2;
const int pinled2 = 9;
const int pinled3 = 10;
const int pinPotenciometro = A0;

int valorPotenciometro = 0;

void setup() {
  pinMode(pinled1, OUTPUT);
  pinMode(pinled2, OUTPUT);
  pinMode(pinled3, OUTPUT);
  pinMode(pinPotenciometro, INPUT);
  // put your setup code here, to run once:
  

}

void loop() {

  valorPotenciometro = analogRead(pinPotenciometro);
  // LED1
 if (valorPotenciometro > 200){
  digitalWrite(pinled1,HIGH);
 }
 else{
  digitalWrite(pinled1,LOW);
 }
 //LED 2
  if (valorPotenciometro > 500){
   digitalWrite(pinled2,HIGH);
 } else{
  digitalWrite(pinled2,LOW);
 }
 //LED 3
  if (valorPotenciometro > 750){
  digitalWrite(pinled3,HIGH);
 }
 else{
  digitalWrite(pinled3,LOW);
 }
 
  //digitalWrite(pinled1,HIGH);

}
