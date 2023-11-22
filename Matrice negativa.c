#include <stdio.h>
#include <time.h>

#define D 10


main()
{

    int matrice[D][D];
    int i,j,numeri_neg=0;

     for(int i = 0; i < D; i++)
        for(int j = 0; j < D; j++)
            matrice[i] [j] = (1 + rand() % 100) - 90;


     for(int i = 0; i < D; i++)
    {
        for(int j = 0; j < D; j++)
            printf("\t%d", matrice[i] [j]);
    }

    for(int i = 0; i < D; i++)
	{
		numeri_neg = 0;

        for(int j = 0; j < D; j++)
			if(matrice[i] [j] < 0)
				numeri_neg++;

		if(numeri_neg == D)
			printf("\nLa riga %d ha solo numeri negativi", i + 1);
	}

    for(int j = 0; j < D; j++)
	{
		numeri_neg = 0;

		for(int i = 0; i < D; i++)
			if(matrice[i] [j] < 0)
				numeri_neg++;

		if (numeri_neg == D)
			printf("\nLa colonna %d ha solo numeri negativi", j + 1);
	}
}



