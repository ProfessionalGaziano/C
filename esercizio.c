#include <stdio.h>
#include <time.h>

#define N 4
#define M 4


void riempi_matrice( int);
void stampa_matrice(int);
void stampa_coordinate(int);
float calcola_max(int);
int somma(int);
float calcola_media(int);

int main()
{
     int matrice[N][M];
     int i,j;

    matrice[i][j]=riempi_matrice(matrice[i][j]);
                  stampa_matrice(matrice[i][j]);

    printf("\nLa media e' %0.1f: %d" ,calcola_media(somma(matrce[i] [j]),matrice[i] [j]));
    printf("\nLa media massima e': %d" ,calcola_max(matrice[i] [j]));
    printf("\nLe coordinate della media massima e' %0.1f: %d" ,stampa_coordinate(matrice[i] [j]]));
}
int calcola_max(matrice[i][j])
{
    int massimo=0;
for(int i = 0; i<N; i++){
  for(int j = 0; i<M; j++)
        if(matrice[i][j]>massimo)
           massimo=matrice[i][j];

            return massimo;
}
}

int somma(matrice[i][j])
{
    int somma=0;
    for(int i = 0; i<N; i++){
        for(int j = 0; i<M; j++)
            somma=somma+matrice[i][j];

        return somma;
    }
}

float calcola_media(matrice [i] [j])
{
    return somma/N;
    return somma/M;
}

void riempi_matrice(matrice [i] [j])
{
    for(int i = 0; i<N; i++){
        for(int j = 0; i<M; i++)
            matrice[i][j]=(rand()%100) + 1;
    }
}

void stampa_matrice(matrice[i] [j])
{
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++)
        print("\t%d",matrice[i][j]);
    }
}

void stampa_coordinate(matrice[i] [j])
{
         for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
        print("\t%d",&somma(matrice[i] [j]));
        print("\t%d",somma(matrice[i] [j]));
        return somma/N;
        return somma/M;
        }
    }
}
