# include <stdio.h>
# define MAXLINE 1000 // ������������ ����� ������ � ������ 
void main(void)
{
	char line[MAXLINE]; // ������� ������������ �����
		int i = 0; // ������� �������� ������� ��������  c�����
	int maximum = 0;
	int cnt = 0; // �������
	int start; // ������� ������ �����
	gets(line);
	while (line[i] != '\0') // ����� ������������ ����� ����� � ��� ������
	{
		if ((line[i] != ' ') && (line[i] != '.') && (line[i] != ',') && (line[i] != '\n') && (line[i] != '\0')) // ������ �����������
		{
			cnt++;
			if (cnt > maximum)
			{
				maximum = cnt;
				start = i - maximum + 1; // ��������� �������
 // ������ �����
 // �������� ���������� �������� �
 // ����������� ��������
 // (����������� �������� �������� � �����)
			}
		}
		else
			cnt = 0;
		i++;
	}
	i = start;
	while (i < (MAXLINE - maximum)) //����������
	{
		line[i] = line[i + maximum];
		i++;
	}
	puts(line);
}