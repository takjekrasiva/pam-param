# include <stdio.h>
# define MAXLINE 1000 // максимальная длина строки в потоке 
void main(void)
{
	char line[MAXLINE]; // текущая максимальная длина
		int i = 0; // позиция текущего символа исходной  cтроки
	int maximum = 0;
	int cnt = 0; // счётчик
	int start; // позиция начала слова
	gets(line);
	while (line[i] != '\0') // поиск максимальной длины слова и его начала
	{
		if ((line[i] != ' ') && (line[i] != '.') && (line[i] != ',') && (line[i] != '\n') && (line[i] != '\0')) // найден разделитель
		{
			cnt++;
			if (cnt > maximum)
			{
				maximum = cnt;
				start = i - maximum + 1; // запомнить позицию
 // начала слова
 // проверка совпадения текущего и
 // предыдущего символов
 // (обнаружение искомого признака в слове)
			}
		}
		else
			cnt = 0;
		i++;
	}
	i = start;
	while (i < (MAXLINE - maximum)) //перезапись
	{
		line[i] = line[i + maximum];
		i++;
	}
	puts(line);
}