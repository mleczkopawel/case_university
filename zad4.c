#include <stdio.h>
#include <stdlib.h>
#include "zad4.h"

#define N 30

int main3(void)
{
    system("cls");
    do{
        system("cls");
        menu3();
        printf("Podaj numer zadania ");scanf("%i",&nr3);
        switch (nr3) {
        case 1:od_N_do_1();break;
        case 2:parzyste_mniejsze_N();break;
        case 3:N_kolejnych_nieparzystych();break;
        case 4:N_liczb_warunek();break;
        case 5:potegi_2();break;
        case 6:silnia_12();break;
        case 7:odwrotne();break;
        case 8:ciag_liczbowy();break;
        case 9:suma_N_kolejnych();break;
        default:printf("NIE MA TAKIEGO ZADANIA\n");break;
        }
        printf("Zakonczyc program?(T/N) ");scanf("%s",&decyzja3);
    }while(decyzja3!='t');
    return 0;
}
void menu3()
{
    printf("\n");
    printf("          |****     ****|     |********|     |***  |**|     |**|    |**|\n");
    printf("          |**| ** ** |**|     |**|           |**** |**|     |**|    |**|\n");
    printf("          |**|  ***  |**|     |*****|        |**|** **|     |**|    |**|\n");
    printf("          |**|       |**|     |**|           |**| ****|     |**|    |**|\n");
    printf("          |**|       |**|     |********|     |**|  ***|     |**********|\n");
    printf("          |__|       |__|     |________|     |__|   __|     |__________|\n");
    printf("\n");
    printf("               ****************************************************\n");
    printf("               *                                                  *\n");
    printf("               *           [1] Liczby od N do 1                   *\n");
    printf("               *           [2] Tylko parzyste mniejsze od N       *\n");
    printf("               *           [3] N kolejnych liczb nieparzystych    *\n");
    printf("               *           [4] N liczb:1,4,7,10,13...             *\n");
    printf("               *           [5] 15 kolejnych poteg 2               *\n");
    printf("               *           [6] 12 kolejnych silni                 *\n");
    printf("               *           [7] Odwrotne do naturalnych            *\n");
    printf("               *           [8] 17 kolejncy wyrazow ciagu          *\n");
    printf("               *           [9] Suma N kolejnych liczb naturalnych *\n");
    printf("               *                                                  *\n");
    printf("               ****************************************************\n");
    printf("\n");
}
void od_N_do_1()
{
    int i,roznica;
    printf("               *           [1] Liczby od N do 1                   *\n");
    i=1;
    roznica=N;
    while(i<=N)
    {
        printf("%d, ",roznica);
        roznica--;
        i++;
    }
    printf("\n");
}
void parzyste_mniejsze_N()
{
    int i;
    printf("               *           [2] Tylko parzyste mniejsze od N       *\n");
    i=1;
    while(i<=N)
    {
        if(i%2==0)
            printf("%i, ",i);
        i++;
    }
    printf("\n");
}
void N_kolejnych_nieparzystych()
{
    int i,suma;
    printf("               *           [3] N kolejnych liczb nieparzystych    *\n");
    i=1;
    suma=0;
    do{
        if(i%3==0)
        {
            printf("%i, ",i);
            suma++;
        }
        i++;
    }while(suma<=N);
    printf("\n");
}
void N_liczb_warunek()
{
    int i,suma;
    printf("               *           [4] N liczb:1,4,7,10,13...             *\n");
    i=1;
    suma=1;
    while(i<=N)
    {
        printf("%i, ",suma);
        suma=suma+3;
        i++;
    }
    printf("\n");
}
void potegi_2()
{
    int i, potega;
    printf("               *           [5] 15 kolejnych poteg 2               *\n");
    i=1;
    potega=1;
    while(i<=15)
    {
        printf("%i, ",potega);
        potega=potega*2;
        i++;
    }
    printf("\n");
}
void silnia_12()
{
    int i,silnia;
    printf("               *           [6] 12 kolejnych silni                 *\n");
    i=1;
    silnia=1;
    while(i<=12)
    {
        printf("%i, ",silnia);
        silnia=silnia*i;
        i++;
    }
    printf("\n");
}
void odwrotne()
{
    float i;
    printf("               *           [7] Odwrotne do naturalnych            *\n");
    while(i<=N)
    {
        printf("%.3f, ",(1/i));
        i++;
    }
    printf("\n");
}
void ciag_liczbowy()
{
    int i,an;
    printf("               *           [8] 17 kolejncy wyrazow ciagu          *\n");
    i=1;
    an=3;
    while(i<=17)
    {
        printf("%i, ",an);
        an=3*an-4;
        i++;
    }
    printf("\n");
}
void suma_N_kolejnych()
{
    int i,suma;
    printf("               *           [9] Suma N kolejnych liczb naturalnych *\n");
    i=1;
    suma=0;
    while(i<=N)
    {
        suma=suma+i;
        i++;
    }
    printf("Suma=%i\n",suma);
}
