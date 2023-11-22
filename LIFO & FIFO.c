#include<stdio.h>
#define dim 5
main(){
int numeri[dim],i;
FILE *tp;
int scelta=0;


printf("\n FIFO, First Input First Out: \t Inserisci  1 ");
printf("\n \n LIFO,Last Input First Out: \t Inserisci 2 ");


printf("\n \n Quale strategia vuoi utilizzare?: ");
scanf("%d",&scelta);


tp=fopen("LIFO & FIFO.txt","w+");



if(scelta==1){

printf("\n Hai scelto FIFO,First Input First Out");


for(i=0;i<dim;i++){

    printf("\n Inserisci i numeri:    ");
    scanf("%d",&numeri[i]);


fwrite(&numeri[i],sizeof(int),1,tp);

}
for(i=0;i<dim;i++){

printf("Ecco i numeri stampati con questa strategia: \n %d=[%d]",numeri[i],i);

}
}

if(scelta==2){

    printf("\n Hai Scelto LIFO,Last Input First Out ");

 do{


i=5;

    printf("\n Inserisci i numeri:  ");
     scanf("%d",numeri[i]);

i--;

 }while(i==0);



}

fclose(tp);



}


