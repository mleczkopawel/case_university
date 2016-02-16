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
    tx4=&tabx4[0];
    tx5=&tabx5[0];/*I love you very much my Honey :* <3 oo*/
    tx6=&tabx6[0];
    ll1=&l1;
    ll2=&l2;
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
        case 19:zad18_tablice(2,5,tx1,tx2);break;
        case 20:zad19_tablice(2,5,tx1);break;
        case 21:zad20_tablice(5,5,tx5);break;
        case 22:zad21_tablice(3,3,tx3);break;
        case 23:zad22_tablice(3,3,tx3);break;
        case 24:zad23_teblice(3,3,tx3);break;
        case 25:zad24_tablice(5,5,tx5);break;
        case 26:zad25_tablice(3,3,tx3,tx4);break;
        case 27:zad26_tablice(3,3,tx3,tx6,tx4);break;
        case 28:zad27_tablice(3,3,tx3);break;
        case 29:zad28_tablice(5,5,tx5);break;
        case 30:{
            printf("Podaj liczbe k, k=");scanf("%d",&liczba);
            zad30_tablice(liczba,5,5,tx5);
        }break;
        case 31:{
            maxx=zad31_tablice(ll1,ll2,3,3,tx4);
            printf("MAX=%d, wiersz %d, kolumna %d\n",maxx,l1,l2);
        }break;
        case 98:randtx(3,3,tx6);break;
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
    printf("               *               ********************************   *\n");
    printf("               *               [10] Mnozy elementy przez liczbe   *\n");
    printf("               *               [11] Zeruje wieksze od liczby      *\n");
    printf("               *               [12] Odwraca elementy tablicy      *\n");
    printf("               *               [13] Dodaje 2 tablice typu int     *\n");
    printf("               *               [14] Randomowe elementy tablicy    *\n");
    printf("               *               [15] Drukowanie tablicy z zad 14   *\n");
    printf("               *               [16] Zeruje pierwsza lub druga pol *\n");
    printf("               *               [17] Sasiednie                     *\n");
    printf("               *               [19] Przepisuje dwuwymiarowe       *\n");
    printf("               *               [20] Odwraca kazdy wiersz tablicy  *\n");
    printf("               *               *********************************  *\n");
    printf("               *               [21] Zeruje po przekatnej          *\n");
    printf("               *               [22] Sumuje po przekatnej          *\n");
    printf("               *               [23] Sumuje wiersze                *\n");
    printf("               *               [24] Jeszcze brak...               *\n");
    printf("               *               [25] Najmniejszy i zeruje w i k    *\n");
    printf("               *               [26] Transponuje                   *\n");
    printf("               *               [27] Sumije dwie macierze          *\n");
    printf("               *               [28] Mnozy elementy przez liczbe   *\n");
    printf("               *               [29] Zeruje pod przekatna          *\n");
    printf("               *               [30] Zeruje podzielne przez k      *\n");
    printf("               *               [98] Randomy w NxN                 *\n");
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
    temp2=y[x-1];
    for(i=x;i>=0;i--)
    {
        temp=y[i-1];
        y[i]=temp;
    }
//    zamiana2(&y[0],&y[x]);
    y[0]=temp2;
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
    printf("               *               [17] Sasiednie                     *\n");
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
void wypisztx(int x, int y, int z[x][y])
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
            printf("t[%d][%d]=%d\t",i,j,z[i][j]);
        printf("\n");
    }
}
void zad18_tablice(int x, int y, int a[x][y], int b[x][y])
{
    printf("               *               [19] Przepisuje dwuwymiarowe       *\n");
    wypisztx(x,y,b);
    printf("\n");
    int i,j;
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
            b[i][j]=a[i][j];
    wypisztx(x,y,b);
}
void zad19_tablice(int x, int y, int z[x][y])
{
    printf("               *               [20] Odwraca kazdy wiersz tablicy  *\n");
    wypisztx(x,y,z);
    printf("\n");
    int i,j,k=y;
    for(i=0;i<x;i++)
        for(j=0;j<y;j++,k--)
            zamiana2(&z[i][j],&z[i][k-1]);
    wypisztx(x,y,z);
}
void zad20_tablice(int x, int y, int z[x][y])
{
    printf("               *               [21] Zeruje po przekatnej          *\n");
    int i,j,k=y;
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
        {
            if(j==i)
            {
                z[i][j]=0;
                z[i][--k]=0;
            }
        }
    wypisztx(x,y,z);
}
void zad21_tablice(int x, int y, int z[x][y])
{
    printf("               *               [22] Sumuje po przekatnej          *\n");
    int i,j,k=y,suma1=0,suma2=0,suma=0;
    for(i=0;i<(x-1);i++)
        for(j=0;j<(y-1);j++)
        {
            if(j==i)
            {
                suma1+=z[i][j];
//                printf("Suma=%d\n",suma);
//                z[i][j]=0;
                if (z[i][j]==z[i][--k])
                {
                    suma1+=0;
                }
                suma2+=z[i][--k];
//                printf("Suma=%d",suma);
//                z[i][--k]=0;
            }
        }
    k=y;
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
        {
            if(j==i)
            {
//                printf("t[%d][%d]=%d",i,j,z[i][j]);
//                suma+=z[i][j];
//                printf("Suma=%d\n",suma);
                z[i][j]=0;
//                suma=suma+z[i][--k];
//                printf("Suma=%d",suma);
                z[i][--k]=0;
            }
        }
    wypisztx(x,y,z);
    suma=suma1+suma2;
    printf("Suma=%d\n",suma1);
}
int zad22a_tablice(int x, int y, int z[x][y])
{
    int j,suma;
        suma=0;
        for(j=0;j<(y-1);j++)
            suma+=z[x][j];
    return suma;
}
void zad22_tablice(int x, int y, int z[x][y])
{
    printf("               *               [23] Sumuje wiersze                *\n");
    int i,sum;
    for(i=0;i<x;i++)
    {
        sum=zad22a_tablice(i,y,z);
        printf("Suma %d wiersza wynosi %d\n",(i+1),sum);
    }
}
void zad23_teblice(int x, int y, int z[x][y])
{
    printf("               *               [24] Jeszcze brak...               *\n");
    printf("NIC JESZCZE NIE MA");
}
void zad24_tablice(int x, int y, int z[x][y])
{
    printf("               *               [25] Najmniejszy i zeruje w i k    *\n");
    int i,j,k,l,tmp=100,tmp1,tmp2;
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
            if(tmp>z[i][j])
            {
                tmp=z[i][j];
                tmp1=i;
                tmp2=j;
            }
    printf("Najmniejszym elementem jest %d\n",tmp);
    for(k=0;k<y;k++)
        for(l=0;l<x;l++)
            z[tmp1][l]=0;
    for(l=0;l<x;l++)
        for(k=0;k<y;k++)
            z[k][tmp2]=0;
    wypisztx(x,y,z);
}
void zad25_tablice(int x, int y, int z[x][y], int zz[x][y])
{
    printf("               *               [26] Transponuje                   *\n");
    printf("Przed transpozycja\n");
    wypisztx(x,y,z);
    int i,j;
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
            zz[j][i]=z[i][j];
    printf("Po transpozycji\n");
    wypisztx(x,y,zz);
}
void randtx(int x, int y, int z[x][y])
{
    int i,j;
    srand(time(NULL));
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
            z[i][j]=rand()%10+1;
//    wypisztx(x,y,z);
}
void zad26_tablice(int x, int y, int *z, int *zz, int *zzz)
{
    printf("               *               [27] Sumije dwie macierze          *\n");
    int i,j;
    randtx(x,y,zz);
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
            *((zzz+i*sizeof(int))+j)=*((z+i*sizeof(int))+j)+*((zz+i*sizeof(int))+j);
    wypisztx(x,y,zzz);
}
void zad27_tablice(int x, int y, int *z)
{
    printf("               *               [28] Mnozy elementy przez liczbe   *\n");
    int i,j,a;
    printf("Podaj liczbe przez ktora ma byc pomnozona tablica, a=");scanf("%d",&a);
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
            *((z+i*sizeof(int))+j)*=a;
    wypisztx(x,y,z);
}
void zad28_tablice(int x, int y, int z[x][y])
{
    printf("               *               [29] Zeruje pod przekatna          *\n");
    int i,j;
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
            if(i>j)
                z[i][j]=0;
    wypisztx(x,y,z);
}
void zad30_tablice(int a, int x, int y, int z[x][y])
{
    printf("               *               [30] Zeruje podzielne przez k      *\n");
    int i,j;
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
            if(z[i][j]%a==0)
                z[i][j]=0;
    wypisztx(x,y,z);
}
int zad31_tablice(int *a, int *b, int x, int y, int z[x][y])
{
    randtx(x,y,z);
    int i,j,m=0;
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
            if(z[i][j]>m)
            {
                m=z[i][j];
                *a=i;
                *b=j;
            }
    return m;
}






//zwróci max, nr wiersza i nr tablicy


















