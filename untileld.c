#include<stdio.h>
#include<stdlib.h>
#define dim 7
#include<Math.h>
main(){
       int r=1,i,n;
       int infoiniziale[dim];
       int m,informazione;
       int divisione=0;




     printf("inserisci il valore da convertire:");
     scanf("%d",&n);




i=dim-1;
     while(infoiniziale[i]!=0){


        infoiniziale[i]=n/2;
        divisione=n%2;
        i--;
     }




for(i=0;i<dim;i++){
    printf("%d \t ",divisione);
}


}



