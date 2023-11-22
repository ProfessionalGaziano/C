#include<stdio.h>
#include<stdlib.h>
#define vettore 20
#define uscita 40
main(){
    int vet1[vettore];
    int vet2[vettore];
    int vet3[uscita];
    int i,max,min;
   for(i=0;i<vettore;i++){
    printf("inserisci numeri del primo vettore:");
    scanf("%d",&vet1[i]);
    max=vet1;

   }
   for(i=0;i<vettore;i++){
   printf("inserisci numeri del secondo vettore:");
    scanf("%d",&vet2[i]);
    min=vet2;
   }
   if(vet2[i]>vet1[i]){
    vet2[i]=vet1[i];
   }else{
             vet1[i]=vet2[i];

   }
   for(i=0;i<uscita;i++){
 printf("\n i numeri sono:%d %d",vet1[i], vet2[i]);
   }





}

