#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define G 50
main()
{
 char frase[G];
 int i,chiave = 0;

    printf("Non essere timido ! ");
    printf("\n Su, inserisci la frase che vuoi criptare: ");
    gets(frase);
        do{
           printf("\n Insersci la chiave: ");
            scanf("%d", &chiave);
        }while(chiave < 1 || chiave > 10 );
    printf("\n-----------------------------\nOh non c'e bisogno di ringraziarmi ! ");
    printf("\nEcco a te la frase criptata: \n");

    for(i = 0; i < frase[i]; i++ ){
        printf("%c",frase[i] + chiave);
    }
}
