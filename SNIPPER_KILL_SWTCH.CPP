//Colocar en la seción de variables globales
int switchState =0;
bool isTheButtonBeignPressed = false;
bool play = false;
// recordar que el pin del botón puede cambiar
const int buttonPin = 2;


// incluir dentro del setup()
pinMode(greenLEDPin, OUTPUT);

//incluir como loop

 checkButton();
  if (play) {
   //colocar aqui el codigo ejecutar
  }

//función indepiendente checkButon
void loop() {
  checkButton();
  if (play) {
   sound();
  }
}

void checkButton(){
  switchState = digitalRead(buttonPin);
  if (switchState == HIGH){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
  }
}
