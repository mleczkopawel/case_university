#include <stdio.h>
#include <stdlib.h>
#include "tablice.h"

int main6(void)
{
    t=&tab[0];
    t2=&tab2[0];
    t3=&tab3[0];
    t4=&tab4[0];
    unsigned int tab5[liczba];
    t5=&tab5[0];
    tx1=&tabx1[0];
    tx2=&tabx2[0];
    tx3=&tabx3[0];
    do{
        system("cls");
        menu6();
        printf("Podaj numer zadania ");scanf("%i",&nr6);
        switch (nr6) {
        case 1:tablica1(li,t2);break;
        case 2:tablica2(t,t2,t3,5);break;
        case 3:tablice3(t2,3,li);break;
        case 4:{
            tem=tablice4(li,t2);
            printf("MAX=%d\n",tem);
        }break;
        case 5:{
            printf("Podaj jaki ma byc dzielnik ");scanf("%d",&dz);
            sm=zad1_tablice(li,dz,t);
            printf("Takich liczb jest %d\n",sm);
        }break;
        case 6:zad2_tablice(li,t2);break;
        case 7:zad3_tablice(li,t);break;
        case 8:zad4_tablice(li,t);break;
        case 9:zad5_tablice(li,t2);break;
        case 10:{
            printf("Podaj przez jaka liczbe ma byc mnozona tablica ");scanf("%d",&liczba);
            zad10_tablice(li,liczba,t2);
        }break;
        case 11:{
            printf("Podaj od jakiej liczby wieksze maja byc zerowane ");scanf("%d",&liczba);
            zad11_tablice(li,liczba,t2);
        }break;
        case 12:zad12_tablice(li,t4);break;
        case 13:zad13_tablice(t,t2,t3,5);
        case 14:{
            printf("Podaj ile elementow ma miec tablica ");scanf("%d",&liczba);
            zad14_tablice(liczba,t5);
        }break;
        case 15:zad15_tablice(liczba,t5);break;
        case 16:zad16_tablice(liczba,t5);break;
        case 17:zad17a_teblice(liczba,t5);break;
        case 18:{
            liczba2=zad17b_tablice(liczba,t5);
            printf("Zwracana wartosc %d\n",liczba2);
        }break;
        case 19:zad18_tablice(2,5,tx1,tx2);
        case 20:zad19_tablice(2,5,tx1);
        case 21:zad20_tablice(3,3,tx3);
        case 99:break;
        default:printf("NIE MA TAKIEGO ZADANIA\n");break;
        }
        printf("Zakonczyc program?(T/N) ");scanf("%s",&decyzja6);
    }while(decyzja6!='t');
    return 0;
}
void menu6()
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
    printf("               *               [1] Wypisuje tablice               *\n");
    printf("               *               [2] Sumuje dwie tablice            *\n");
    printf("               *               [3] Zeruje elementy wieksze od 3   *\n");
    printf("               *               [4] MAX tablicy                    *\n");
    printf("               *               ********************************   *\n");
    printf("               *               [5] Liczy ile liczb podzielnych k  *\n");
    printf("               *               [6] MIN i MAX i zamiana ich        *\n");
    printf("               *               [7] Sortowanie                     *\n");
    printf("               *               [8] Ile + ile - ile =0             *\n");
    printf("               *               [9] Przesuwa i zamiania            *\n");
//    printf("               *               ********************************   *\n");
//    printf("               *               [10] Mnozy elementy przez liczbe   *\n");
//    printf("               *               [11] Zeruje wieksze od liczby      *\n");
//    printf("               *               [12] Odwraca elementy tablicy      *\n");
//    printf("               *               [13] Dodaje 2 tablice typu int     *\n");
    printf("               *               [14] Randomowe elementy tablicy    *\n");
    printf("               *               [15] Drukowanie tablicy z zad 14   *\n");
    printf("               *               [16] Zeruje pierwsza lub druga pol *\n");
    printf("               *               [17] Sasiednie                     *\n");
//    printf("               *               [18] Przepisuje dwuwymiarowe       *\n");
//    printf("               *               [19] Odwraca kazdy wiersz tablicy  *\n");
//    printf("               *               [9] Mnozy elementy przez liczbe    *\n");
    printf("               *               [99] Konczy program                *\n");
    printf("               *                                                  *\n");
    printf("               ****************************************************\n");
    printf("\n");
}
void tablica1(int x, int *y)
{
    printf("               *               [1] Wypisuje tablice               *\n");
    int i;
    for(i=0;i<x;i++,y++)
        printf("tab[%d]=%d\n",i,*y);
}
void tablica2(int *x, int *y, int *z, int a)
{
    printf("               *               [2] Sumuje dwie tablice            *\n");
    int i;
    for(i=0;i<a;i++)
        z[i]=y[i]+x[i];
    for(i=0;i<a;i++)
        printf("tab[%d]=%d\n",i,z[i]);
}
void tablice3(int *x, int y, int z)
{
    printf("               *               [3] Zeruje elementy wieksze od 3   *\n");
    int i;
    for(i=0;i<z;i++)
    {
        if(x[i]>y)
            x[i]=0;
        printf("tab[%d]=%d\n",i,x[i]);
    }

}
int tablice4(int x, int *y)
{
    printf("               *               [4] MAX tablicy                    *\n");
    int i,temp=0;
    for(i=0;i<x;i++)
        if(temp<y[i])
            temp=y[i];
    return temp;
}
int zad1_tablice(int x, int y, int *z)
{
    printf("               *               [5] Liczy ile liczb podzielnych k  *\n");
    int i,suma;
    suma=0;
    for (i=0;i<x;i++)
        if(z[i]%y==0)
            suma++;
    return suma;
}
void zad2_tablice(int x, int *y)
{
    printf("               *               [6] MIN i MAX i zamiana ich        *\n");
    int i,*tmp1=0,*tmp2=100;
    for(i=0;i<x;i++)
    {
        if(tmp1<y[i])
            tmp1=&y[i];
        if(tmp2>y[i])
            tmp2=&y[i];
    }
    zamiana2(tmp1,tmp2);
    tablica1(x,y);
}
void zamiana2(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
void zad3_tablice(int x, int *y)
{
    printf("               *               [7] Sortowanie                     *\n");
    int i,j;
    for(j=x;j>0;j--)
        for(i=0;i<j-1;i++)
            if(y[i]>y[i+1])
                zamiana2(&y[i],&y[i+1]);
    tablica1(x,y);
}
void zad4_tablice(int x, int *y)
{
    printf("               *               [8] Ile + ile - ile =0             *\n");
    int i,suma1=0,suma2=0,suma3=0;
    for(i=0;i<x;i++)
    {
        if(y[i]>0)
            suma1++;
        else if(y[i]<0)
            suma2++;
        else
            suma3++;
    }
    printf("Liczb dodatnich jest %d, ujemnych %d, =0 %d\n",suma1,suma2,suma3);
}
void zad5_tablice(int x, int *y)
{
    printf("               *               [9] Przesuwa i zamiania            *\n");
    int i,temp,temp2=0;
//    temp2=y[x-1];
    for(i=x;i>=0;i--)
    {
        temp=y[i-1];
        y[i]=temp;
    }
//    y[0]=temp2;
    zamiana2(&y[0],&y[x-1]);
    tablica1(x,y);
}
void zad10_tablice(int x, int y, int *z)
{
    printf("               *               [10] Mnozy elementy przez liczbe   *\n");
    int i;
    for(i=0;i<x;i++)
        z[i]*=y;
    tablica1(x,z);
}
void zad11_tablice(int x, int y, int *z)
{
    printf("               *               [11] Zeruje wieksze od liczby      *\n");
    int i;
    for(i=0;i<x;i++)
        if(z[i]>y)
            z[i]=0;
    tablica1(x,z);
}
void zad12_tablice(int x, double *y)
{
    printf("               *               [12] Odwraca elementy tablicy      *\n");
    int i;
    for(i=0;i<x;i++)
        y[i]=(1/y[i]);
    for(i=0;i<x;i++)
        printf("tab[%d]=%.2f\n",i,y[i]);
}
void zad13_tablice(int *x, int *y, int *z,int a)
{
    printf("               *               [13] Dodaje 2 tablice typu double  *\n");
    tablica2(x,y,z,a);
}
void zad14_tablice(int x, unsigned int *y)
{
    printf("               *               [14] Randomowe elementy tablicy    *\n");
    int i,rando;
    srand(time(0));
    for(i=0;i<x;i++)
    {
        rando=rand()%100+1;
        y[i]=rando;
    }
}
void zad15_tablice(int x, unsigned int *y)
{
    printf("               *               [15] Drukowanie tablicy z zad 14   *\n");
    for(i=0;i<x;i++)
        printf("tab[%d]=%d\n",i,y[i]);
}
void zad16a_tablice(int x, unsigned int *y, int a, int b)
{
    int i;
    for(i=0;i<x;i++)
        if(i>a && i<b)
            y[i]=0;
    tablica1(x,y);
}
void zad16_tablice(int x, unsigned int *y)
{
    printf("               *               [16] Zeruje pierwsza lub druga pol *\n");
    if(y[x-1]%2==0)
        zad16a_tablice(x,y,0-1,((x/2)-1));
    else
        zad16a_tablice(x,y,((x/2)-1),(x-1));
}
void zad17a_teblice(int x, unsigned int *y)
{
    int i,suma=0,ind;
    for(i=0;i<x;i++)
        if(y[i]+y[i+1]>suma)
        {
            suma=y[i]+y[i+1];
            ind=y[i];
        }
    printf("Suma wynosi %d a pierwszy skladnik %d\n",suma,ind);
}
int zad17b_tablice(int x, unsigned int *y)
{
    int i,ret=0;
    for(i=0;i<x;i++)
        if(y[i]==y[i+1])
            ret=1;
    return ret;
}
void wypisztx(int x, int y, int *z[x][y])
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
            printf("t[%d][%d]=%d\t",i,j,z[i][j]);
        printf("\n");
    }
}
void zad18_tablice(int x, int y, int *a[x][y], int *b[x][y])
{
    wypisztx(x,y,b);
    printf("\n");
    int i,j;
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
            b[i][j]=a[i][j];
    wypisztx(x,y,b);
}
void zad19_tablice(int x, int y, int *z[x][y])
{
    wypisztx(x,y,z);
    printf("\n");
    int i,j,k=y;
    for(i=0;i<x;i++)
        for(j=0;j<y;j++,k--)
            zamiana2(&z[i][j],&z[i][k-1]);
    wypisztx(x,y,z);
}
void zad20_tablice(int x, int y, int *z[x][y])
{
    int i,j,k=y;
    for(i=0;i<x;i++)
        for(j=0;j<y;j++,k--)
        {
            z[i][j]=0;
            z[i][k-1]=0;
        }
    wypisztx(x,y,z);
}

































