#include<stdio.h>
main(){
    int n,i,vet1[5],vet2[5],vet3[5],numeromax=0,min,media[5];
     for(i=0;i<n;i++){
        printf("inserisci di quanti numeri:");
        scanf("%d",&n);
        printf("inserisci numeri: ");
        scanf("%d",vet1[i]);
        if(numeromax<vet1)
        numeromax=vet1;
        
    }
    for(i=0;i<n;i++){
        printf("inserisci quanti numeri:");
        scanf("%d",&n);
        
        printf("inserisci numeri: ");
        scanf("%d",&vet2[i]);
        if(vet2<vet1)
        min=vet2;
        
    }
   
       
        
   
    vet3=vet1+vet2;
    media=vet3/n;
    
    printf("i numeri sono:%d,%d,%d",min,numeromax,media[i]);
   
        
        
    }
    
    
        
    
    
    
    
