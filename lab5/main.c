#pragma warning(disable:4996)
#include <stdio.h>
#define N 10
int main(void)
{
	int x[N];// массив из N эллементов
	int otr=0;// счетчки положительнх чисел
	int pol=0;// счетчик положительных чисел
	int i; // элемент массива
//ввод массива	
	for (i = 0; i < N; i++)
	{
		scanf("%d", &x[i]);
		if (x[i] < 0)
		{
			otr++;
		}
		else
		{
			pol++;
		}
	}
	if (otr == pol)
	{
	}
	else
	{
// обнуление элементов
		if (otr < pol)
		{
			for (i = 0; i < N; i++)
			{
				if (x[i] < 0)
				{
					x[i] = 0;
				}
			}
		}
		else
		{
			for (i = 0; i < N; i++)
			{
				if (x[i] > 0)
				{
					x[i] = 0;
				}
			}
		}
	}
// вывод массива
	for (i = 0; i < N; i++)
		printf("%d ", x[i]);
	return 0;
}
