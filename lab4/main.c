ning(disable : 4996)
# include <stdio.h>
# define MAXLINE 1000
void main(void)
{
	printf("please, enter some words \n");
	char line[MAXLINE];
	int start;
	int cnt = 0;
	int i = 0;
	int maximum = 0;
	gets(line);
	if ((line[i] < 'a' || line[i] > 'z') && (line[i] < 'A' || line[i] > 'Z')) // проверить не является ли этот символ лишним
	{
		puts(line); // в слове есть лишний символ
	}
	else
		while (line[i] != '\0') // поиск максимальной длины слова и его начала
	{
		if ((line[i] != ' ') && (line[i] != '.') && (line[i] != ','))
		{
			cnt++;
			if (cnt > maximum)
			{
				maximum = cnt;
				start = line[i] - maximum + 1;
			}
		}
		else
			cnt = 0;
		line[i] ++;
	}
	line[i] = start;
	while (line[i] < (MAXLINE - maximum)) // перезапись
	{
		line[i] = line[i + maximum];
		line[i] ++;
	}
	puts(line);
}
