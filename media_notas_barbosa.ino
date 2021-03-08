/*NOM= Wesley Barbosa
 *FECHA=8/3/21
 *este progama te dice las media 
 *
  */
int notas[] = {5,6,7,8,4};
int numeroDeNotas = 5;

void setup() {
  // put your setup code here, to run once:
  int notaMinima = 10;
 int sumaNotas=0;
 for (int i=0; i <numeroDeNotas; i++){
  sumaNotas= sumaNotas + notas[i];
     if(notas[i]< notaMinima){
    notaMinima = notas[i]; 
   }

 }

  float mediaDeNotas = sumaNotas/numeroDeNotas;
  Serial.begin(9600);
  Serial.print("Notas media: ");
  Serial.println(mediaDeNotas);
  Serial.print("Notaminima: ");
  Serial.println(notaMinima);
 
  Serial.println("Cálculo de si toca hace el axamen con el operador y");
  if (mediaDeNotas >5 && notaMinima >=3) {
    Serial.println("No toca hacer el examen de acceso");
  }
  else{
     Serial.println("LToca hacer el examen de acceso");
  }

}//llave del setup
 
void loop() {
  // put your main code here, to run repeatedly:


}
