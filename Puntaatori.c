#include <stdio.h>
#include <stdlib.h>
int main()
{
		float *voti = NULL;
		int nvoti;
		float votinonusati;
		float media,somma;
		int i ;

	 printf("Quanti voti devi inserire?:  ");
     scanf("%d", &nvoti);

     voti = (float *)malloc(nvoti * sizeof(float));

     float *posizione = NULL;
        posizione = (float *)malloc(votinonusati * sizeof(float));

     for( int i = 0;i < nvoti; i++)
     {
		 printf("\n su inserisci i voti:   ");
         scanf("%f", &voti[i]);

	 }
        posizione = &voti[i];
     for( int i = 0;i < nvoti; i++)
     {
		 if(voti[i] < 2.5 && voti[i] > 8.5)
         {
            votinonusati++;
		 }
		 somma = somma + voti[i] ;
         media = somma / nvoti - votinonusati;
     }
         printf("\nla somma e':\t  %1.1f ", somma);
         printf("\nla media e':\t %1.1f ", media);



}
