#pragma warning(disable : 4996) 
#include <stdio.h> 
int main(void)
{
	unsigned long num = 0, N, mask = 15; // ������, ������ ����� �����, �����
	scanf("%x", &N); // 
	while (N != 0) // �� ���� ��� ����� ���������
	{
		num ^= (N & mask); // �������� �� ������ 2
		N = N � 4; // ����� ������ ����� �����
		num = num � 4; // ����� ���� ����� �����, ����� ������ ������ ���������
	}
	num = num � 4; // 
	printf("%x", num);
	return 0;
}