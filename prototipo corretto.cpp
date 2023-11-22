#include<stdio.h>
int main(){
    int numero[5];
    int numeromax[5];
    int valore[5];
    int i;
     for(i=0;i<5;i++){
        printf("inserisci numeri del primo vettore: ");
        scanf("%d",&numero[i]);
          
}
      
           for(i=0;i<5;i++){
            printf("inserisci numeri del secondo vettore:");
            scanf("%d",&valore[i]);
            } 
    for(i=0;i<5;i++){
        if(valore[i]<numero[i]){
            numeromax[i]=numero[i];
            
        }else
         numeromax[i]=valore[i];
        }
 
       for(i=0;i<5;i++){
  printf("\n il valore massimo è:[%d]=%d",i,numeromax[i]);
  }  
}