# include  < stdio.h >
int  main () {

int i, j , w = 0 ;
int n [ 6 ]; 
int x [ 6 ]; 

for (i = 0 ; i < 6 ; i ++) {

   printf ( " insira os numeros sorteados: " );
   scanf ( " % d " , & x [i]);
   }
for (i = 0 ; i < 6 ; i ++) {

   printf ( "\ninsira os numeros que jogou: " );
   scanf ( " % d " , & n [i]);

   }

for (i = 0 ; i < 6 ; i ++) {

   printf ( "%d\t%d\n" , x [i], n [i]);
   }

for (i = 0 ; i < 6 ; i ++) {
for (j = 0 ; j < 6 ; j ++) {
   se (n [i] == x [j]) {
       w ++;
   }
   }
   }
switch (w) {
   case  0 :
   printf ("Não foi hoje");
   break;
   case  1:
   printf ("Não foi hoje");
   break;
   case  2:
   printf ("Não foi hoje");
   break;
   case  3:
   printf ("Quase");
   break;
   case  4:
   printf ("Ganhou quadra");
   break;
   case  5:
   printf ("Ganhou quina");
   break;
   case  6:
   printf ("Ganhou tudo");
   break;
   }
   }
