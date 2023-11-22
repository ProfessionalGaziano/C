#include<stdio.h>
main(){
    int prezzo=600;
    int quantita;
    int totale;    
    do{
        printf("quanti televisori ti servono?:");
        scanf("%d",&quantita);
    }while(quantita>3);
    if(quantita==3){
       totale=prezzo*2;
        printf("il totale è: %d",totale);
    }
    else{
       totale=prezzo*quantita;
        printf("il totale è:%d",totale);
    }
   
        
   }    
    