#include <stdio.h>
int main (){

int n, r, s, o=0, i;

  printf ("Digite o numero\n");
  scanf("%i" , &n);

for (i = 1; n > 0 ; i = i*10){
  s = n%8;
  n = n/8;
  o = o + (s*i);
}
printf ("%i" , o);
return 0;
}
