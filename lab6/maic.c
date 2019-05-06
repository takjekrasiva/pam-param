#include<stdio.h>
#include<time.h> // дл€ работы с системной датой и временем (for srand)
#include<stdlib.h>
#define N 3 
#define N 3 
main()
{
	int i; // строка
	int j; // столбец
	int posi; // позици€ стр
	int posj; // поз ст
	int max; // макс эл
	int S[N][N]; // положенме
	float op; // дл€ замены
	srand(time(NULL)); // датчик случайных чисел, опирающийс€ на системное врем€
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			S[i][j] = (rand() % 100); // присваиваение рандомного значени€ от 0 до 99
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
	printf("%d	- max\n %d-i\n %d-j", max, posi, posj);  // первое-макс, потом след строкой-строка, след-столбец
	printf("\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%d ", S[i][j]);
		printf("\n");
	}
	return 0;
}