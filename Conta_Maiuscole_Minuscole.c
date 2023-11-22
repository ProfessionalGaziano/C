#include <stdio.h>
#include <stdlib.h>
#define  F 10

char contafrase(char a);
main()
{

    int i ;
    int max=0,min=0;
    char frase[F] ;

    printf("Inserisci la parola: ");
    gets(frase);

    for(i = 0;frase[i]!='\0'; i ++)
    {
        if(frase[i]>'A' && frase[i]<'Z')
                max++;
        if(frase[i]>'a'&& frase[i]<'z')
                min++;
    }

             printf("\n e'  maiuscola:\n %d \n",max);
             printf("\n e'  minuscola:\n %d ",min);
}






