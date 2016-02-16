#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "zad3.c"
#include "zad4.c"
#include "funkcje.c"
#include "wskazniki.c"
#include "tablice.c"
#include "struktury.c"

int main(void)
{
    do{
        system("cls");
        menu();
        printf("Podaj numer zadania ");scanf("%i",&nr);
        switch (nr) {
        case 1:suma_liczb();break;
        case 2:liniowe();break;
        case 3:wypisz_licznik();break;
        case 4:kwadratowe();break;
        case 5:nwd();break;
        case 6:podzielne_przez_3();break;
        case 7:trzy_liczby();break;
        case 8:doskonala();break;
        case 9:podzielne_przez_3_przy_n();break;
        case 10:czas();break;
        case 11:mod_x();break;
        case 12:warunek();break;
        case 13:losowe();break;
        case 14:zgadywanka();break;
        case 15:liczby_do_n_przecinek();break;
        case 16:main2();break;
        case 17:main3();break;
        case 18:main4();break;
        case 19:main5();break;
        case 20:main6();break;
        case 21:main7();break;
        case 98:zadanka2();break;
        default:printf("NIE MA TAKIEGO ZADANIA\n");break;
        }
        printf("Zakonczyc program?(T/N) ");scanf("%s",&decyzja);
    }while(decyzja!='t');
    return 0;
}
void menu()
{
    printf("           ____     ____       ________       __    __       __      __ \n");
    printf("          |****     ****|     |********|     |***  |**|     |**|    |**|\n");
    printf("          |**| ** ** |**|     |**|           |**** |**|     |**|    |**|\n");
    printf("          |**|  ***  |**|     |*****|        |**|** **|     |**|    |**|\n");
    printf("          |**|       |**|     |**|           |**| ****|     |**|    |**|\n");
    printf("          |**|       |**|     |********|     |**|  ***|     |**********|\n");
    printf("          |__|       |__|     |________|     |__|   __|     |__________|\n");
    printf("\n");
    printf("               ****************************************************\n");
    printf("               *                                                  *\n");
    printf("               *               [1] Suma n liczb                   *\n");
    printf("               *               [2] Rownanie liniowe               *\n");
    printf("               *               [3] Wypisywanie licznika           *\n");
    printf("               *               [4] Rownanie kwadratowe            *\n");
    printf("               *               [5] NWD                            *\n");
    printf("               *               [6] Podzielne przez 3              *\n");
    printf("               *               [7] Najwieksza z trzech liczb      *\n");
    printf("               *               [8] Liczba doskonala               *\n");
    printf("               *               [9] Podzielne przez 3 dla n        *\n");
    printf("               *               [10] Pokazuje czas z sekund        *\n");
    printf("               *               [11] Liczy mod z x                 *\n");
    printf("               *               [12] Warunek                       *\n");
    printf("               *               [13] Losowe z zakresem             *\n");
    printf("               *               [14] Zgadywanka                    *\n");
    printf("               *               [15] Liczby do n po przecinku      *\n");
    printf("               *               [16] 10 zadan                      *\n");
    printf("               *               [17] 8 (9) zadan                   *\n");
    printf("               *               [18] Funkcje                       *\n");
    printf("               *               [19] Wskazniki                     *\n");
    printf("               *               [20] Tablice                       *\n");
    printf("               *               [21] Struktury                     *\n");
    printf("               *                                                  *\n");
    printf("               ****************************************************\n");
    printf("\n");
}
void suma_liczb()
{
    int n,a,suma,i;
    printf("               *               [1] Suma n liczb                   *\n\n");
    printf("    Podaj ile liczb ma byc zsumowanych\n");
    printf("        n=");scanf("%i",&n);
    if (n==0)
        printf("    Wynik wynosi 0\n");
    else
    {
        suma=0;
        for (i=1;i<=n;i++)
        {
            printf("        Podaj liczbe a, a=");scanf("%i",&a);
            suma=suma+a;
        }
    }
    printf("\n    Sposrod %i podanych liczb ich suma wynosi %i\n",n,suma);
}
void liniowe()
{
    float a,b,x;
    printf("               *               [2] Rownanie liniowe               *\n\n");
    printf("Wporwadz dane do obliczenia rownania liniowego\n");
    printf("    a=");scanf("%f",&a);
    printf("    b=");scanf("%f",&b);
    if (a!=0)
    {
        x=-b/a;
        printf("rowananie ma jedno roziwazanie x=%f\n",x);
    }
    else if (b==0)
        printf("rownanie ma nieskonczenie wiele rozwiazan\n");
    else
        printf("rownanie sprzeczne\n");
}
void kwadratowe()
{
    int a,b,c;
    float d,x,x1,x2;
    printf("               *               [4] Rownanie kwadratowe            *\n\n");
    printf("    Wprowadz dane do obliczania funkcji kwadratowej\n\n");
    printf("        Podaj a, a=");scanf("%i",&a);
    printf("        Podaj b, b=");scanf("%i",&b);
    printf("        Podaj c, c=");scanf("%i",&c);
    if (a==0)
    {
        printf("    To jest rownanie liniowe\n");
        if (a!=0)
        {
            x=-b/a;
            printf("rowananie ma jedno roziwazanie x=%f\n",x);
        }
        else if (b==0)
            printf("rownanie ma nieskonczenie wiele rozwiazan\n");
        else
            printf("rownanie sprzeczne\n");
    }
    else
    {
        d=b*b-4*a*c;
        if (d<0)
            printf("    Brak miejsc zerowych\n\n");
        else if (d==0)
        {
            x=-b/(2*a);
            printf("    Jest jedno miejsce zerowe ktore wynosi %f\n\n",x);
        }
        else
        {
            x1=(-b-sqrt(d))/(2*a);
            x2=(-b+sqrt(d))/(2*a);
            printf("    Istnieja dwa pierwiastki:\n\n");
            printf("        x1=%f\n\n",x1);
            printf("        x2=%f\n\n",x2);
        }
    }
}
void wypisz_licznik()
{
    int i,n;
    printf("               *               [3] Wypisywanie licznika           *\n\n");
    printf("    Podaj ile razy ma sie wypisac licznik\n");
    printf("    n=");scanf("%i",&n);
    for (i=1;i<=n;i++)
    {
        printf("    Licznik wynosi %i\n",i);
    }
}
void nwd()
{
    int a,b;
    printf("               *               [5] NWD                            *\n\n");
    printf("Wprowadz dane do NWD\n\n");
    printf("    a=");scanf("%i",&a);
    printf("    b=");scanf("%i",&b);
    while (a!=b)
    {
        if (a>b)
            a=a-b;
        else
            b=b-a;
    }
    printf("NWD jest rowne %i\n",a);
}
void podzielne_przez_3()
{
    int a,n,i,suma;
    printf("               *               [6] Podzielne przez 3              *\n\n");
    printf("    Podaj ilosc liczb\n");
    printf("        n=");scanf("%i",&n);
    for (i=1;i<=n;i++)
    {
        printf("    Podaj liczbe a, a=");scanf("%i",&a);
        if (a%3==0)
            suma++;
    }
    printf("    Sposrod %i liczb %i jest podzielna przez 3\n",n,suma);
}
void trzy_liczby()
{
    int a,b,c;
    printf("               *               [7] Najwieksza z trzech liczb      *\n\n");
    printf("Wprowadz dane do porownania\n");
    printf("    a=");scanf("%i",&a);
    printf("    b=");scanf("%i",&b);
    printf("    c=");scanf("%i",&c);
    if (a<b)
        if (b<c)
            printf("Najwieksza liczba z posrod wybranych jest c=%i",c);
        else
            printf("Najwieksza liczba z posrod wybranych jest b=%i",b);
    else if(a<c)
        printf("Najwieksza liczba z posrod wybranych jest c=%i\n",c);
    else
        printf("Najwieksza liczba z posrod wybranych jest a=%i\n",a);
    printf("\n");
}
void doskonala()
{
    int i,n,suma;
    printf("               *               [8] Liczba doskonala               *\n\n");
    printf("\n\t Wprowadz liczbe do sprawdzenia czy jest doskonala\n");
    printf("\t n=");scanf("%i",&n);
    suma=0;
    for(i=1;i<n;i++)
        if(n%i==0)
            suma=suma+i;
    if(suma==n)
        printf("Liczba %i jest doskonala\n",n);
    else
        printf("Liczba %i nie jest doskonala\n",n);
}
void podzielne_przez_3_przy_n()
{
    int i,n,suma;
    printf("               *               [9] Podzielne przez 3 dla n        *\n\n");
    printf("Podaj ile liczb ma program wypisac\n");
    printf("\t n=");scanf("%i",&n);
    suma=0;
    for(i=1;suma<n;i++)
        if(i%3==0)
        {
            printf(" Liczba %i jest podzielna przez 3\n",i);
            suma++;
        }
}
void czas()
{
    int ls,s,min,h;
    printf("               *               [10] Pokazuje czas z sekund        *\n\n");
    printf("\t Pdaj czas w sekundach\n");
    printf("\t\t t=");scanf("%d",&ls);
    h=ls/3600;
    min=(ls/60)%60;
    s=ls%60;
    printf("%d=%dh %dmin %ds\n",ls,h,min,s);
}
void mod_x()
{
    int x,nx;
    printf("               *               [11] Liczy mod z x                 *\n");
    printf("    Wprowadz x\n\n");
    printf("        Podaj x, x=");scanf("%i",&x);
    nx=x<0?-x:x;
    printf("    |%d|=%d\n\n",x,nx);
}
void warunek()
{
    int a,b,c;
    printf("    Wprowadz liczby\n\n");
    printf("        Podaj a, a=");scanf("%i",&a);
    printf("        Podaj b, b=");scanf("%i",&b);
    c=(a*b<0)?a+b:a-b;
    printf("%d\n\n",c);
}
void losowe()
{
    int losowa;
    printf("               *               [13] Losowe z zakresem             *\n");
    srand(time(0));
    losowa=rand()%100+1;
    printf("    Liczba losowana %d\n\n",losowa);
}
void zgadywanka()
{
    int losowa,zgadywana,i=0;
    printf("               *               [14] Zgadywanka                    *\n");
    srand(time(0));
    losowa=rand()%5+1;
    do{
        printf(" Podaj liczbe aby zgadnac ");scanf("%d",&zgadywana);
        if(zgadywana==losowa)
            printf("Trafiles :)\n");
        else
        {
            printf("Niestety nie trafiles...\n");
        }
        i++;
    }while(zgadywana!=losowa);
    printf("\t Udalo Ci sie za %d razem\n\n",i);
}
void liczby_do_n_przecinek()
{
    int n,licznik;
    printf("               *               [15] Liczby do n po przecinku      *\n");
    printf("\t Podaj ile liczb ma bys wypisanych ");scanf("%i",&n);
    licznik=1;
    while(licznik<=n)
    {
        printf("%i,",licznik);
        licznik++;
    }
    printf("\n");
}
void zadanka2()
{
//    int y=2,x=1;
//    if(y) x*=-1;
//    if(y-->x) x+=4;
//    printf("\nx=%d y=%d",x,y);
    int i=3,j=3, x=0;
    while(i=--j){
        x-=j;
        printf("%d\n", x);
      }
}
