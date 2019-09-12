# include <stdio.h>
# define MAXLINE 1000
void main(void)
{
	char line[MAXLINE];
	int start;
	int cnt = 0;
	int i = 0;
	int maximum = 0;
	gets(line);
	while (line[i] != '\0') // поиск максимальной длины слова и его начала
	{
		if ((line[i] != ' ') && (line[i] != '.') && (line[i] != ','))
		{
			cnt++;
			if (cnt > maximum)
			{
				maximum = cnt;
				start = i - maximum + 1;
			}
		}
		else
			cnt = 0;
		i++;
	}
	i = start;
	while (i < (MAXLINE - maximum)) // перезапись
	{
		line[i] = line[i + maximum];
		i++;
	}
	puts(line);
}
