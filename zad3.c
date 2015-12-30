#include <stdio.h>
#include <stdlib.h>
#include "zad3.h"

int main2(void)
{   system("cls");
    do{
        system("cls");
        menu2();
        printf("Podaj numer zadania ");scanf("%i",&nr2);
        switch (nr2) {
        case 1:piec_wierszy();break;
        case 2:znak_wiecej();break;
        case 3:potega_2();break;
        case 4:calkowita_reszta();break;
        case 5:reprezentacja_binarna();break;
        case 6:suma_cyfr_naturalnej();break;
        case 7:suma_dwucyfrowych();break;
        case 8:suma_n_skladnikow();break;
        case 9:liczby_pierwsze();break;
        case 10:doskolana_z_przedzialu();break;
        case 11:zadanka();break;
        default:printf("NIE MA TAKIEGO ZADANIA\n");break;
        }
        printf("Zakonczyc program?(T/N) ");scanf("%s",&decyzja2);
    }while(decyzja2!='t');
    return 0;
}
void menu2()
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
    printf("               *               [1] Piec wierszy dziesiec znakow   *\n");
    printf("               *               [2] Dzieiec wierszy znak + 1       *\n");
    printf("               *               [3] Potega liczby 2                *\n");
    printf("               *               [4] Calkowita czesc i reszta       *\n");
    printf("               *               [5] Ile jedynek w binarnej         *\n");
    printf("               *               [6] Suma cyfr liczby naturalnej    *\n");
    printf("               *               [7] Suma dwucyfrowych z modulo     *\n");
    printf("               *               [8] Suma n skladnikow              *\n");
    printf("               *               [9] Liczby pierwsze z przedzialu   *\n");
    printf("               *               [10] Liczba doskonala z przedzialu *\n");
    printf("               *                                                  *\n");
    printf("               ****************************************************\n");
    printf("\n");
}
void piec_wierszy()
{
    int i,j;
    printf("               *               [1] Piec wierszy dziesiec znakow   *\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void znak_wiecej()
{
    int i,j;
    printf("               *               [2] Dzieiec wierszy znak + 1       *\n");
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
            if(i<=j)
                printf("\n");
        }
    }
}
void potega_2()
{
    int i,potega=2;
    printf("               *               [3] Potega liczby 2                *\n");
    for(i=1;i<=12;i++)
    {
        printf("Potega wynosi %i\n",potega);
        potega=potega*2;
    }
}
void calkowita_reszta()
{
    int a,b,calkowita,reszta;
    printf("               *               [4] Calkowita czesc i reszta       *\n");
    printf("Podaj liczbe a, a=");scanf("%i",&a);
    printf("Podaj liczbe b, b=");scanf("%i",&b);
    calkowita=a/b;
    reszta=a%b;
    printf("\t Calkowita czesc to %i a reszta to %i\n",calkowita,reszta);
}
void reprezentacja_binarna()
{
    int liczba,suma;
    printf("               *               [5] Ile jedynek w binarnej         *\n");
    printf("Podaj liczbe ");scanf("%i",&liczba);
    suma=0;
    while(liczba!=0)
    {
        if(liczba%2==1)
            suma++;
        liczba=liczba/2;
    }
    printf("W reprezentacji naszej liczby jest %i jedynek\n",suma);
}

void doskolana_z_przedzialu()
{
    int i,j,n,suma1,suma2;
    printf("               *               [10] Liczba doskonala z przedzialu *\n");
    printf("\n\t Wprowadz przedzial\n");
    printf("\t od ");scanf("%i",&j);
    printf("\t do ");scanf("%i",&n);
    suma1=0;
    suma2=0;
    for(j;j<=n;j++)
    {
        suma1=0;
        for(i=1;i<j;i++)
            if(j%i==0)
                suma1=suma1+i;
        if(suma1==j)
            suma2++;
    }
    printf("Z naszego przedzialu, %i jest liczbami doskonalymi\n",suma2);
}
void suma_dwucyfrowych()
{
    int k,r,liczba,suma;
    printf("               *               [7] Suma dwucyfrowych z modulo     *\n");
    printf("Podaj k, k=");scanf("%i",&k);
    printf("Podaj r, r=");scanf("%i",&r);
    suma=0;
    for(liczba=10;liczba<=99;liczba++)
        if(liczba%k==r)
            suma++;
    printf("Suma takich liczb wynosi %i\n",suma);
}
void suma_cyfr_naturalnej()
{
    int liczba,cyfra,suma;
    printf("Podaj liczbe ");scanf("%i",&liczba);
    suma=0;
    while(liczba>0)
    {
        cyfra=liczba%10;
        suma=suma+cyfra;
        liczba=liczba/10;
    }
    printf("Suma wynosi %i\n",suma);
}
void suma_n_skladnikow()
{
    int i,j,n,liczba,zmienna,suma;
    printf("               *               [8] Suma n skladnikow              *\n");
    printf("Podaj ile skladnikow ma byc w sumie ");scanf("%i",&n);
    suma=0;
    for(i=1;i<=n;i++)
    {
        zmienna=1;
        liczba=0;
        for(j=1;j<=i;j++)
        {
            liczba=i*zmienna+liczba;
            zmienna=zmienna*10;
            //printf("%d",liczba);
        }
        printf("%d\n",liczba);
        suma=suma+liczba;
    }
    printf("%i\n",suma);
}
void liczby_pierwsze(){
    int poczatek,koniec,licznika,suma;
    printf("               *               [9] Liczby pierwsze z przedzialu   *\n");
    printf("\n\t Wprowadz przedzial\n");
    printf("\t od ");scanf("%i",&poczatek);
    printf("\t do ");scanf("%i",&koniec);
    for(poczatek;poczatek<=koniec;poczatek++)
    {
        suma=0;
        licznika=1;
        while(licznika<=poczatek)
        {
            if(poczatek%licznika==0)
                suma++;
            licznika++;
        }
        if(suma==2)
            printf("%d, ",poczatek);
    }
}
void zadanka(){
    double x,y,z,c;
    int a=7,b=10;
    x=a/b;
    y=a/b*3.0;
    z=a/y;
    c=3.0*a/b;
    printf("x=%f y=%f z=%f c=%f\n",x,y,z,c);
    int s,k;
    s=1;
    k=1;
    while(k-6)
        s*=k++;
    printf("%d\n",s);
    int q=4,w=4*q;
    do{
        q++;
        printf("%d\t%d\n",q,w);
    }while(q- --w);
    printf("%d\n",q);
}
