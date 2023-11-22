#include <stdio.h>
/// @brief 
main(){
    int a;
    int b;
    int totale = 0;

    printf("Inserisci il primo numero:  ");
    scanf("%d",&a);
    
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    totale = a + b ; 

    printf("Il totale è : %d", totale);
}