#include<stdio.h>
#include<stdlib.h>
int quadrato (int a,int b){
int perimetro;
perimetro=a*b;
return perimetro;
}
int area1(int t,int r ){
int area=0;
area=t*t;
 return area;
}
int triangolo (int c,int d){
float area;
area=c*d/2;
return area;
}
int main(){
  int l,b=0,h=0,perimetro,area,scelta;
  printf("\n 1 Quadrato \n 2 Triangolo");



     printf("\n Scegli quali di queste figure \n geometriche vuoi fare il perimetro e l'area:\t");
  scanf("%d",&scelta);
  if(scelta>2){
    printf("\n la figura scelta è inesistente");
  }
  if(scelta==1){
    printf("\n insersci il lato:\t ");
    scanf("%d",&l);
  area=area1(l,l);
  perimetro=l*4;
   printf("\n il perimetro e l'area del quadrato sono: \n %d,\n %d",perimetro,area);

    }else{
        if(scelta==2){
            printf("inserisci la base:\t");
            scanf("%d",&b);
            printf("insersci l'altezza:\t");
            scanf("%d",&h);
            printf("inserisci il lato:\t");
            scanf("%d",&l);
            perimetro=l*3;
             area=triangolo(b,h);
            printf("il perimetro e l'area del triangolo sono:\n %d, \n %d",perimetro,area);



 }
        }








}
