#include<stdio.h>
#include<stdlib.h>
int quadrato(int a,int b){
int a;
int area;
area=a*a;
}

    int area;
    int l;
    int perimetro=0;
    perimetro=l*4;
    area=l*l;
}
int triangolo(int b,int h);
{
    float area;

    int perimetro=0;
    perimetro=c*3;
     area=b*h/2;
}
main(){
   int l,l2=l;
   int area;
   int perimetro=0;
   int i;
   int scelta;
   int b;
   int h;
   printf("scegli la figura geometrica di cui vuoi l'area e il perimetro: ");
   scanf("%d",&scelta);
   switch(scelta){
   case 1
       printf("\n inserisci il lato del quadrato:\t ");
       scanf("%d",&l);
       perimetro= int quadrato(l,4);
       area= int quadrato(l,l2);
printf("il perimetro del quadrato è:%d \t",perimetro);
   printf("\n l' area del quadrato è:\t %d",area);
       break;
   case 2
        for(i=0;i<3;i++){
            printf("\n inserisci i lati del triangolo:\t ");
            scanf("%d",&l);

        }
        printf("inserisci la base:\t");
        scanf("%d",&b);
        printf("\n inserisci l'altezza:\t");
        scanf("%d",&h);
        perimetro=int triangolo(l,3);
        area=int triangolo(b,h);

    printf("il perimetro del triangolo è:%d \t",perimetro);
    printf(" \n l'area del triangolo è:%f1.2 \t",area);


        break;

   }default:printf("\n non e possibile inserire numeri maggiori di 2");

}








}
