#include <stdio.h>
#include <stdbool.h>
#define R 4

main(){
    int A[R][R];
    int i,j;
    int somma=0;
    int sommad=0;
    float divisione=0;
    int w=0;
    bool verifica=false;

    printf("Inserire il valore da confrontare: ");
    scanf("%d", &w);

    for(i=0;i<R;i++){
        for(j=0;j<R;j++){
            printf("Inserire il numero nella riga %d e nella colonna %d: ",i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }

    for(i=0;i<R;i++){
        for(j=0;j<R;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<R;i++){
        for(j=0;j<R;j++){
            somma=somma+A[i][j];
        }
    }
printf("la somma delle matrici e':%d",somma);

    if(divisione>w){
        verifica=true;
    }

}
