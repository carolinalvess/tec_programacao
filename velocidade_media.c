#include <stdio.h>
int main () {

 float distancia , tempo , velocidade;
 
 printf ("informe a distancia:");
 scanf ("%f" , &distancia);
 
 printf("informe o tempo:");
 scanf ("%f" , &tempo);
 
 velocidade = distancia / tempo;
 
 printf ("%f" , velocidade);
 
 getch ();
 }
