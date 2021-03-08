#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;// respuesta 

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  pinMode(switchPin,INPUT);
  lcd.print("Que dice");
  lcd.setCursor(0,1);
  lcd.print("la bola");

}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(switchPin);
  if (switchState != prevSwitchState){
  if (switchState == LOW){
    reply = random(8);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("la bola dice:");
  lcd.setCursor(0,1);
  switch(reply){
    case 0:
    lcd.print("sí");
    break;
    case 1:
    lcd.print("problamente");
    break;
    case 2:
    lcd.print("Desde luego");
    break;
    case 3:
    lcd.print("Tienes buena pinta");
    break;
    case 4:
    lcd.print("No estoy seguro");
    break;
    case 5:
    lcd.print("Vuelve a preguntar");
    break;
    case 6:
    lcd.print("Tengo dudas");
    break;
    case 7:
    lcd.print("No");
    break;
  }
  }
  }
 prevSwitchState = switchState;
}
