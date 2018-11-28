#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
     setlocale(LC_ALL, "RUSSIAN");
     int a;
     printf("Ââĺäčňĺ íîěĺđ ěĺń˙öŕ: ");
     scanf("%i", &a);
     switch (a) {
           case 1: printf("Ďĺđâűé ęâŕđňŕë"); break;
           case 2: printf("Ďĺđâűé ęâŕđňŕë"); break;
           case 3: printf("Ďĺđâűé ęâŕđňŕë"); break;
           case 4: printf("Âňîđîé ęâŕđňŕë"); break;
           case 5: printf("Âňîđîé ęâŕđňŕë"); break;
           case 6: printf("Âňîđîé ęâŕđňŕë"); break;
           case 7: printf("Ňđĺňčé ęâŕđňŕë"); break;
           case 8: printf("Ňđĺňčé ęâŕđňŕë"); break;
           case 9: printf("Ňđĺňčé ęâŕđňŕë"); break;
           case 10: printf("×ĺňâĺđňűé ęâŕđňŕë"); break;
           case 11: printf("×ĺňâĺđňűé ęâŕđňŕë"); break;
           case 12: printf("×ĺňâĺđňűé ęâŕđňŕë"); break;
           default: printf("Íĺâĺđíîĺ çíŕ÷ĺíčĺ");
           }
     getch();
}
