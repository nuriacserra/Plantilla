/********************************************************************************************************
 **
 **                             Plantilla 
 **                             Practica 1 
 **                            
 **   Nom: Núria Cordero Serra               Date: 30/11/2016
 *********************************************************************************************************/
//****************************Include**********************************


//****************************Variables********************************

int pinled=2;

//****************************Setup************************************
void setup() {
 pinMode(2,OUTPUT);
}
//***************************Loop**************************************
void loop() {
  digitalWrite(2,HIGH);
  delay(500);
  digitalWrite(2,LOW);
  delay(500);
}
//***************************Funcions**********************************
