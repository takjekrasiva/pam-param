#include<stdio.h>
#include<time.h> // ��� ������ � ��������� ����� � �������� (for srand)
#include<stdlib.h>
#define N 3 
#define N 3 
main()
{
	int i; // ������
	int j; // �������
	int posi; // ������� ���
	int posj; // ��� ��
	int max; // ���� ��
	int S[N][N]; // ���������
	float op; // ��� ������
	srand(time(NULL)); // ������ ��������� �����, ����������� �� ��������� �����
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			S[i][j] = (rand() % 100); // ������������� ���������� �������� �� 0 �� 99
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
	printf("%d	- max\n %d-i\n %d-j", max, posi, posj);  // ������-����, ����� ���� �������-������, ����-�������
	printf("\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%d ", S[i][j]);
		printf("\n");
	}
	return 0;
}