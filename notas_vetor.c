#include <stdio.h>
int main () {

int n, i, media, soma=0, b;

  printf("insira a quantidade de notas:");
  scanf("%d" ,&n);

int x [n];

for (i=0; i < n; i++){
  printf("insira a nota:");
  scanf ("%d" , &x[i]);
  soma = soma +x[i];
  }

media = soma/n;

if (media >= 60) {
  printf ("APROVADO");
  }
else {
  printf ("REPROVADO");
  }
  
return 0;
}
