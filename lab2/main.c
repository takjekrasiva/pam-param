#include <stdio.h> // необходимо для корректного вызова функций ввода/вывода
#include <math.h>  // библиотека для совершения математических действий
int main (void) // главная функция main не принимает данных от операционной системы,
// возвращает статус завершения
{ // начало тела программы
// описание переменных
    float s=0; // сумма ряда и начальное присваивание элемента
    float a,x; // очередной элемент и входной параметр ряда
    int n; // количество проходов
    int i=0; // номер элемента и начальное присваивание элемента
    int sign=1; // знак очередного элемента ряда и начальное присваивание элемента
    // ввод параметров ряда
    printf ("n="); //
    scanf("%d",&n); //
    printf ("x="); //
    scanf("%f",&x); //
    // цикл
    while(i<n)
    {
        a=(1+i)/pow(x,i+1);
        s=s+a*sign;
        i=i+1;
    }
    // вывод результата
        printf("s=%.2f \n",s); //
    // программа возвращается признак корректного  завершения 
        return 0;
    } // конец тела программы

