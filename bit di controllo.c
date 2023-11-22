#include<stdio.h>
main(){
     int a[7];
     int b[7];
     int i,somma=0,bitdicontrollo;
     for(i=0;i<7;i++){
     printf("inserisci bit:");
     scanf("%d",&a[i]);
     somma=a[i]+somma;
     }
     bitdicontrollo=somma%2;
     if(somma==0){
        bitdicontrollo=0;
     }else{
         bitdicontrollo=1;
     }

          a[i]=b[i];

     for(i=0;i<7;i++){
     printf("\ti bit di controllo sono:%d,%d",b,bitdicontrollo);
     }





}
