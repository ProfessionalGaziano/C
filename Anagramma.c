#include<stdio.h>
#define dim 10
main(){
char Parola[dim],Parola2[dim];
char j,i,Anagramma;

printf("NOTA:        ");
printf("\n Inserisci due Parola e ti dirò se una di esse e un Anagramma.");





printf("\n Inserisci una parola: ");
scanf("%s",Parola);


printf("\n Inserisci la seconda Parola: ");
scanf("%s",Parola2 );







if(Parola==Parola2){

    printf("La parola che hai scritto e' un Anagramma");


}else{

    printf("La parola che hai scritto non e' un Anagramma");



}

}
