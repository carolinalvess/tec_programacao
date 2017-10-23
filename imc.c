#include <stdio.h>
int main () {

  float altura, imc;
  int peso;
  
  printf ("informe a altura:");
  scanf ("%f" , &altura) 
  printf ("informe o peso:");
  scanf ("%i" , &peso);
  imc = (altura * altura) / peso;
  printf ("o imc e: %f" , imc);

  getch ();
}
