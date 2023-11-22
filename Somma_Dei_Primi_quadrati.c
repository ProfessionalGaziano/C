
#include <stdio.h>
#include <omp.h>
#include <time.h>


typedef unsigned long long ull;
using namespace std;

int main()
{

  ull i, somma = 0;
  double inizio, fine;

  inizio = omp_get_wtime();
  #pragma omp parallel

  for (i = 1; i <= 1000000; i++)
  {
    somma += i * i;
  }

  fine = omp_get_wtime();

  printf("Tempo di calcolo statica: %f\n", fine - inizio);
  printf("Somma  statica: %d\n", somma);

  somma = 0;
  inizio = omp_get_wtime();
  #pragma omp parallel

  for (i = 1; i <= 1000000; i++)
  {
    somma+= i * i;
  }
  fine = omp_get_wtime();

   printf("Tempo di calcolo dinamico: %f\n", fine - inizio);
  printf("Somma dinamica : %lld\n", somma);
