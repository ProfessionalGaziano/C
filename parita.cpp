#include<stdio.h>
main(){
    int bit[6];
    int  bitnuovo;
    int i;
    int modulo;
    int somma=0;
     for(i=0;i<6;i++){
        printf("inserisci i bit: ");
        scanf("%d",&bit[i]);}
        somma=bit+somma;
        modulo=somma%2;
        if(modulo==1){
           bitnuovo=1;
         }else{
            if(modulo==0)
          bitnuovo=0;
  } 
     printf("i bit sono:%d",bit[i],bitnuovo);
 }       