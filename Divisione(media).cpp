#include<stdio.h>
main(){
    int numeri;
    float somma;
    double media=0;
    float n;
    int i=0;
    printf("con quanti numeri vuoi fare la media?:");
    scanf("%f",&n);
    do{
        printf("inserisci i numeri:");
        scanf("%d",&numeri);
         somma=somma+numeri;
        i++;
     }while(i<n);
    media=(double)(somma/n);
    printf("la media è:%f",media);
}
 