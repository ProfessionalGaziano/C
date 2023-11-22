#include<stdio.h>
main(){
int bit[7];
int bitnuovo;
int i;
int modulo;
int somma=0;
for(i=0;i<7;i++){
    printf("\n inserisci i bit nel primo vettore:");
    scanf("%d",&bit[i]);
    somma=somma+bit[i];
    modulo=somma%2;
}
if(modulo==1){
    bitnuovo=1;
}else{
    bitnuovo=0;
}
for(i=0;i<7;i++){
    printf("\t I bit:\t %d %d",bit[i],bitnuovo);

}
