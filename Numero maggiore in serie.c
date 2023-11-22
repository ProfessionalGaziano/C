#include<stdio.h>
#define vettore 20
#define vettoref 40
#define vettore2 20
main(){
int sequenza1[vettore];
int sequenza2[vettore2];
int i;
for(i=0;i<vettore;i++){
    printf("\n inserisci i numeri del primo vettore: ");
    scanf("%d",&sequenza1[i]);
    }
    for(i=0;i<vettore2;i++){
        printf("\n inserisci i numeri del secondo vettore: ");
        scanf("%d",&sequenza2[i]);
         }

            for(i=0;i<vettoref;i++){
            printf("\n sono ordinati:%d",sequenza1[i]);
            printf("\n sono ordinati:%d",sequenza2[i]);

        }

}











