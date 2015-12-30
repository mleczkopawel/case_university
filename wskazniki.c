#include <stdio.h>
#include <stdlib.h>
#include "wskazniki.h"

int main5(void)
{
    w=&i;
    v=&a;
    p=&i;
    do{
        system("cls");
        menu5();
        printf("Podaj numer zadania ");scanf("%i",&nr5);
        switch (nr5){
        case 1:wsk1();break;
        case 2:{
            spr(i,v);
            printf("i=%d, a=%d\n",i,a);
        }break;
        case 3:{
            printf("i=%d, a=%d\n",i,a);
            zamiana(w,v);
            printf("i=%d, a=%d\n",i,a);
        }break;
        case 4:{
            printf("Podaj liczby:\n");
            printf("u=");scanf("%d",&u);p=&u;
            printf("y=");scanf("%d",&y);o=&y;
            aaa=zad1(p,o);
            printf("Wieksza jest %d\n",aaa);
        }break;
        case 5:{
            printf("Podaj liczby:\n");
            printf("u=");scanf("%d",&u);p=&u;
            printf("y=");scanf("%d",&y);o=&y;
            aaa=zad2(p,o);
            printf("Suma jest rowna %d",aaa);
        }break;
        case 6:{
            printf("Podaj liczby:\n");
            printf("u=");scanf("%d",&u);p=&u;
            printf("y=");scanf("%d",&y);o=&y;
            zamiana(p,o);
            printf("u=%d, y=%d",u,y);
        }
        case 7:{
            printf("Podaj liczby:\n");
            printf("u=");scanf("%d",&u);p=&u;
            printf("y=");scanf("%d",&y);o=&y;
            zad4(p,w);
            printf("u=%d, y=%d\n",u,y);
        }break;
        case 8:{
            printf("Podaj liczbe:\n");
            printf("u=");scanf("%d",&u);
            zad5(u,p);
            printf("p=%d\n",u);
        }break;
        case 9:zad6();break;
        case 10:{
            printf("Podaj przedial:\n");
            printf("n=");scanf("%d",&u);p=&u;
            printf("k=");scanf("%d",&y);o=&y;
            zad7(p,o);
        }break;
        case 11:{
            printf("Podaj liczbe:\n");
            printf("u=");scanf("%d",&u);
            aaa=zad9(w,v,u);
            printf("Zwracana wartosc %d\n",aaa);
        }break;
        default:printf("NIE MA TAKIEGO ZADANIA\n");break;
        }
        printf("Zakonczyc program?(T/N) ");scanf("%s",&decyzja5);
    }while(decyzja5!='t');
    return 0;
}
void menu5()
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
    printf("               *               [1] Wskazniki 1                    *\n");
    printf("               *               [2] Funkcja wskazniki 2            *\n");
    printf("               *               [3] Zamiana                        *\n");
    printf("               *               [4] Zad1                           *\n");
    printf("               *               [5] Zad2                           *\n");
    printf("               *               [6] Zad3                           *\n");
    printf("               *               [7] Zad4                           *\n");
    printf("               *               [8] Zad5                           *\n");
    printf("               *               [9] Zad6                           *\n");
    printf("               *               [10] Zad7                          *\n");
    printf("               *                                                  *\n");
    printf("               ****************************************************\n");
    printf("\n");
}
void wsk1()
{
    printf("i=%d, &i=%p\n",i,&i);
    printf("*w=%d, w=%p\n",*w,w);
}
void spr(int x, int *p)
{
    x=x+1;
    *p=*p+1;
    printf("x=%d, *p=%d\n",x,*p);
}
void zamiana(int *x, int *y)
{
    int t;
    t=*y;
    *y=*x;
    *x=t;
}
int zad1(int *x, int *y)
{
    int aa;
    if(*x<*y)
        aa=*x;
    else if(*y<*x)
        aa=*y;
    return aa;
}
int zad2(int *x, int *y)
{
    int suma;
    suma=(*x%*y)+(*y%*x);
    return suma;
}
void zad4(int *x, int *y)
{
    int t;
    if(*x>*y)
    {
        t=*y;
        *y=*x;
        *x=t;
    }
}
void zad5(int n, int *w)

{
    *w=n;
}
void zad6()
{
    int u;
    poczatek:
        printf("Podaj liczbe wieksza od 5, ");scanf("%d",&u);
        if(u<=5)
        {
            printf("Podales za mala liczbe\n");
            goto poczatek;
        }
        else
            printf("Podales liczbe %d\n",u);
}
void zad7(int *x, int *y)
{
    int a;
    poczatek:
        printf("Podaj liczbe a, a=");scanf("%d",&a);
        if(a>*x && a<*y)
            printf("Podales liczbe z przedzialu n=%d, k=%d a liczba wynosi %d\n",*x,*y,a);
        else
        {
            if(a<*x)
                printf("Za mala\n");
            else if(a>*y)
                printf("Za duza\n");
            goto poczatek;
        }
}
int zad9(int *x, int *y, int z)
{
    int suma=0;
    if(*x%z==0)
        suma+=1;
    if(*y%z==0)
        suma+=1;
    return suma;
}

//funkcja powinna sprawdzić czy liczby podzielne parametr jeśli podzielne to
