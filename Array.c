#include <stdio.h>
#define N 4
#define M 8

main()
{
int vettore1[N],vettore2[N],vettore3[M],i,parita=0,index;

                     for(i=0;i<N;i++)
                     {
                        printf("\n  Inserisci gli elementi del primo vettore:   ");
                        scanf("%d",&vettore1[i]);
                     }

                     for(i=0;i<N;i++)
                     {
                         printf(" \n Inserisci gli elementi del secondo vettore:   ");
                         scanf("%d",&vettore2[i]);
                     }
                        for(i=0;i<N;i++)
                     {
                            parita=vettore1[i]%2;
                            parita=vettore2[i]%2;
                     }

                        if(parita==0)
                        {
                            index++;
                            vettore3[index]=vettore1[i];
                            vettore3[index]=vettore2[i];
                            printf("I numeri pari sono:%d  ",vettore3[index]);

                        }
}



