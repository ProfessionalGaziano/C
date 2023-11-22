#include<stdio.h>
main(){
    int numero;
    int numeromax=0;
    do{
        printf("inserisci il numero:");
        scanf("%d",&numero);  
        if(numeromax<numero)  {
            numeromax=numero;
            
        } 
    }while(numero!=0);
    printf("/n il numero maggiore è:%d",numeromax);
    
}