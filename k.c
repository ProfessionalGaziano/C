#include<stdio.h>
#include<Math.h>
#define dim 8

main(){

int n;
int divisione[dim];
int risultatodivisione=0;
int bitsegno,k,i,rindondanti,numero=0;


printf("inserisci un numero decimale:  ");
scanf("%d",&n);

if(n>0){
    bitsegno=0;
}else{
    bitsegno=1;
    n=n*-1;
}


   i=dim-1;
do{
        divisione[i]=n/2;
        n=n%2;
        i--;


}while(divisione[i]!=0);

divisione[i]=bitsegno;

for(i=0;i<dim;i++){
printf("%d",divisione[i]);
}


do{
    numero=n+k^2-k;
    k++;
}while(n<=k);

for(i=0;i<dim;i++){
printf("il numero di bit rindondanti e':%d",k);
}


}
