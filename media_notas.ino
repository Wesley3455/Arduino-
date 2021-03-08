/*NOM= Wesley Barbosa
 *FECHA=8/3/21
 *este progama te dice las media 
 *
  */
int notas[] = {5,8,9,4,3};
int numeroNotas = 5;

void setup() {
  // put your setup code here, to run once:
 int sumaNotas=0;
 for (int i=0; i <numeroNotas; i++){
  sumaNotas= sumaNotas + notas[i];
 }
  float mediaNotas = sumaNotas/numeroNotas;
  Serial.begin(9600);
  Serial.print("Notas media: ");
  Serial.println(mediaNotas);
 }


void loop() {
  // put your main code here, to run repeatedly:

}
