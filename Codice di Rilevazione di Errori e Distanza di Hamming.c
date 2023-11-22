
main(){
int A[7];
int B[7];
int bitnuovo;
int i;
int modulo;
int somma=0;
for(i=0;i<7;i++){
    printf("\n inserisci i bit nel primo vettore:");
    scanf("%d",&bitA[i]);
    somma=somma+bitA[i];
    modulo=somma%2;
}
for(i=0;i<7;i++){
    printf("\n inserisci i bit del secondo vettore:");
    scanf("%d",&bitB[i]);
    somma=somma+bitB[i];
    modulo=somma%2;
    }
if(modulo==1){
    bitnuovo=1;
}else{
    bitnuovo=0;
}
for(i=0;i<7;i++){
    printf("\n I bit del primo vettore sono:%d %d",bitA[i],bitnuovo);

}
for(i=0;i<7;i++){
    printf("\n iI bit del secondo vettore sono:%d %d",bitB[i],bitnuovo);

}


}
