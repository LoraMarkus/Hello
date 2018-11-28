#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
     setlocale(LC_ALL, "RUSSIAN");
     int a;
     printf("Введите номер месяца: ");
     scanf("%i", &a);
     switch (a) {
           case 1: printf("Первый квартал"); break;
           case 2: printf("Первый квартал"); break;
           case 3: printf("Первый квартал"); break;
           case 4: printf("Второй квартал"); break;
           case 5: printf("Второй квартал"); break;
           case 6: printf("Второй квартал"); break;
           case 7: printf("Третий квартал"); break;
           case 8: printf("Третий квартал"); break;
           case 9: printf("Третий квартал"); break;
           case 10: printf("Четвертый квартал"); break;
           case 11: printf("Четвертый квартал"); break;
           case 12: printf("Четвертый квартал"); break;
           default: printf("Неверное значение");
           }
     getch();
}
