#include<stdio.h>
//
main(){
       int n,vet[n],i=0,numero,occorenza=0;
       printf("quanti numeri vuoi inserire?:");
       scanf("%d",&n);
       for(i=0;i<n;i++){
                        printf("inserisci numero:");
                        scanf("%d",vet[i]);
                        }
       printf("quale numero vuoi trovare:");
       scanf("%d",&numero);
       for(i=0;i<n;i++){
                        if(vet[i]==numero)
                        occorenza=0;
                        }
                        if(occorenza==0)
                        printf("non sono state trovate occorenza..");
                        else
                        printf("Occorenza del numero %d:%d",numero,occorenza);                 
       
       
