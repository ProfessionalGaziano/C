#include <stdio.h>
#include <stdlib.h>

void partecipante_giudice (int C,int G,int MAXK,int MAXN,int Voti[ MAXK ][MAXN]);

int main()
{
    int N,K,i,j;
    int MAXN = NULL;
    int MAXK = NULL;
    int voti[MAXN][MAXK];

    printf("Benvenuto Inserisci il numero di candidati?:  ");
    scanf("%d",&K);
    printf("\nSei Stato Grande! Ora");

     MAXN = (int *)malloc(sizeof(int) * N);
     MAXK = (int *)malloc(sizeof(int) * K);

    printf("\n Insersci il numero dei giudici?:  ");
    scanf(" %d ", &N);

    for(i = 0;i < K; i++)
    {
        printf("Inserisci i voti per il candidato %d\n",i+1);

    for(j = 0;j < N; j++)
        {
            printf("\nAdesso preparati ad essere giudicato candidato %d\n",i+1);
            printf("\n il Giudice %d, ti giudicherà (Prega!) %d? ",j+1,i+1);
            scanf("%d", &voti[i][j]);
        }
    }

    printf(" il candidato più intelligente ed il giudice più severo sono\n");

    void partecipante_giudice(K,N,voti[MAXK][MAXN]);

    return 0;
}

void partecipante_giudice (int C,int G,int Voti[][MAXN]){
    int MaxCandi[MAXK];
    int MaxGiudi[MAXN];
    int i,j;
    int min,max,posmin,posmax;

    for(i = 0; i < C;i ++) MaxCandi[ i ] = 0;
    for(j = 0;j < G; j++) MaxGiudi[ j ] = 0;

    for(i = 0;i < C; i++)
    {
        for(j = 0;j < G; j++)
        {
            MaxCandi[ i ] = MaxCandi[ i ] + Voti[ i ][ j ];
            MaxGiudi[ j ] = MaxGiudi[ j ] + Voti[ i ][ j ];
        }
    }

    max = MaxCandi[0];
    posmax = 0;

    for(i = 1;i < C; i++)
    {
        if(MaxCandi[ i ] > max)
        {
            max = MaxCandi[ i ];
            posmax = i;
        }
    }

    printf(" il candidato che ha meritato la vittoria e il numero %d\n", posmax + 1);

    min = MaxGiudi[ 0 ];
    posmin = 0;

    for(i = 1;i < G; i++)
    {
        if(MaxCandi[ i ] > max)
        {
            min = MaxGiudi[ i ];
            posmin = i;
        }
    }

    printf("Il giudice piu' severo e'stato il numero %d\n", posmin + 1);

}
