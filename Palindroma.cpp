#include<stdio.h>
#define dimensioine 10
#include<string.io>
main(){

char parola [dimensione];
int i,j,lungezza,palindroma=0;

printf("/n NOTA: Una parola palindroma e una parola che se letta da entrambi i versi non cambia es //Anna,Tenet,Osso ecc.");



printf("/n Inserisci una parola e ti diro se quella è una parola palindroma");
scanf("%s", parola);



lunghezza=strlen(parola);


for(i=0;j=lunghezza-1;i<lunghezza/2;i++,j--){

    if(parola[i]!=parola[j]);
    palindroma=1;
    break;

}
if(palindroma==0)
{

     printf("/n La parola che hai scritto è: %s",parola);
printf("/n la parola che hai scritto è una parola palindroma");



}else

{

    printf("/n La parola che hai scritto è: %s",parola);
printf("/n la parola che hai scritto non è una parola palindroma");


}



}



