#include<stdio.h>
main(){
int bit1[7];
int bitrand[7];
int bitnuovo;
int i;
int modulo;
int somma=0;
int hamming=0,hamming2=0,hammingf=0;
for(i=0;i<7;i++){
    printf("\n inserisci i bit nel primo vettore:");
    scanf("%d",&bit1[i]);
    somma=somma+bit1[i];
    modulo=somma%2;
    }

for(i=0;i<7;i++){
    bitrand[i]=rand()%2;
    }
if(modulo==1){
    bitnuovo=1;
}else{
    bitnuovo=0;
}
for(i=0;i<8;i++){
        if(bitrand[i]==bit1[i]){
    if(bitrand[i]=1){
        hamming++;
    }
    if(bit1[i]=1){
       hamming2++;
    }

 hammingf=hamming+hamming%2;
        }
}
for(i=0;i<8;i++){
    printf("\n I bit del primo vettore sono:%d %d",bit1[i],bitnuovo);

}
for(i=0;i<8;i++){
    printf("\n iI bit del secondo vettore sono:%d %d",bitrand[i]);

}
for(i=0;i<15;i++){
    printf("\n la distanza di hamming è: %d",hammingf);
}

}
