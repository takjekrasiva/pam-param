#pragma warning(disable:4996)
#include <stdio.h>
#define N 10
int main(void)
{
	int x[N];//������ �� N ����������
	int otr=0;//������� ������
	int pol=0;//������� ��������
	int i;
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

	for (i = 0; i < N; i++)
		printf("%d ", x[i]);
	return 0;
}