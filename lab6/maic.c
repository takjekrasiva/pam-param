#include<stdio.h>
#include<time.h // для работы с системной датой и временем (for srand)
#include<stdlib.h>
#define N 3 
#define N 3 
main(void)
{
	int i; // stroka
	int j; // stolbe
	int posi;  
	int posj; 
	int max; // max element
	int S[N][N]; // mestopolojenie
	float op; // for zameni
	srand(time(NULL)); // datchik randonih chisel, opir na sist bremya
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			S[i][j] = (rand() % 100); // chisla ot 0 do 99
			printf("%d ", S[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			if (S[i][j] > max)
			{
				max = S[i][j];
				posi = i;
				posj = j;
			}
	}
	for (i = 0; i < N; i++)
	{
		op = S[posi][i];
		S[posi][i] = S[i][posj];
		S[i][posj] = op;
	}
	printf("%d	- max\n %d-i\n %d-j", max, posi, posj);  // max element, sled str, sled stolbec
	printf("\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%d ", S[i][j]);
		printf("\n");
	}
	return 0;
}
