#pragma warning(disable : 4996) 
#include <stdio.h> 
int main(void)
{
	unsigned long num = 0, N, mask = 15; // €чейки, длнное целое число, маска
	scanf("%x", &N); // 
	while (N != 0) // до того как число обнулитс€
	{
		num ^= (N & mask); // сложение по модулю 2
		N = N ї 4; // сдвиг вправо части числа
		num = num Ђ 4; // сдвиг этой штуки влево, чтобы начать заново провер€ть
	}
	num = num ї 4; // 
	printf("%x", num);
	return 0;
}