#include <stdio.h>
#include <omp.h>
#include <time.h>
#include <stdbool.h>



#define TDBEG() clock_t _c = clock();
#define TBEG() _c = clock();
#define TEND() cout << "\nT: " << fixed << (double)(clock()-_c)/CLOCKS_PER_SEC << endl;




bool isPrime(int n) {
  int i;
  if (n <= 1) return false;
  for (i = 2; i < n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  int n, i, conta = 0;
  double inizio, fine,fine_tempo;

  printf("Inserisci un numero n: ");
  scanf("%d", &n);

  inizio = omp_get_wtime();

  #pragma omp parallel
  for (i = 2; i <= n; i++) {
    if (isPrime(i)) {
      conta++;
    }
  }
  fine = omp_get_wtime();
  printf("Tempo di calcolo parallelo: %f\n", fine - inizio);
  printf("Numero di numeri primi tra 2 e %d: %d\n", n, conta);

  conta = 0;
  inizio = omp_get_wtime();
  for (i = 2; i <= n; i++) {
    if (isPrime(i)) {
      conta++;
    }
  }
  fine = omp_get_wtime();
  printf("Tempo di calcolo seriale: %f\n", fine - inizio);
  printf("Numero di numeri primi tra 2 e %d: %d\n", n, conta);

  fine_tempo = (double)(fine - inizio);
  printf("Tempo di esecuzione: %f\n", fine_tempo );


  }
