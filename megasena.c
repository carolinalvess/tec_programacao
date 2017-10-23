# include  < stdio.h >
int  main () {

int i, j , w = 0 ;
int n [ 6 ]; 
int x [ 6 ]; 

para (i = 0 ; i < 6 ; i ++) {

   printf ( " insira os numeros sorteados: " );
   scanf ( " % d " , & x [i]);
   }
para (i = 0 ; i < 6 ; i ++) {

   printf ( "\ninsira os numeros que jogou: " );
   scanf ( " % d " , & n [i]);

   }

para (i = 0 ; i < 6 ; i ++) {

   printf ( "%d\t%d\n" , x [i], n [i]);
   }

para (i = 0 ; i < 6 ; i ++) {
para (j = 0 ; j < 6 ; j ++) {
   se (n [i] == x [j]) {
       w ++;
   }
   }
   }
mudar (w) {
   caso  0 :
   printf ("Não foi hoje");
   quebrar;
   caso  1:
   printf ("Não foi hoje");
   quebrar;
   caso  2:
   printf ("Não foi hoje");
   quebrar;
   caso  3:
   printf ("Quase");
   quebrar;
   caso  4:
   printf ("Ganhou quadra");
   quebrar;
   caso  5:
   printf ("Ganhou quina");
   quebrar;
   caso  6:
   printf ("Ganhou tudo");
   quebrar;
   }
   }
