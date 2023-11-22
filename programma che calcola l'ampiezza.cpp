#include<stdio.h>
main(){
       float g;
       float p;
       float s;
       float ampiezza;
       printf("inserisci l'angolo in grado:");
       scanf("%f",&g);
       printf("inserisci l'angolo in primi:");
       scanf("%f",&p);
       printf("inserisci l'angolo in secondi:");
       scanf("%f",&s);
       ampiezza=g*3600+p*60+s;
       printf("ampiezza in secondi=%8.2f");
       }
