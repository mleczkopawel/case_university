#include <stdio.h>
#include <stdlib.h>
#include "funkcje.h"

int main4(void)
{
    do{
        system("cls");
        menu4();
        printf("Podaj numer zadania ");scanf("%i",&nr4);
        switch (nr4) {
        case 1:
        {
            printf("Podaj ile liczb ma byc sumowanych, n=");scanf("%d",&ile1);
            wynik1=fsuma(ile1);
            printf("Suma wynosi %d\n",wynik1);
        }break;
        case 2:
        {
            printf("Podaj z jakiej liczby ma byc obliczona silnia, n=");scanf("%d",&ile2);
            wynik2=fsilnia(ile2);
            printf("Silnia wynosi %d\n",wynik2);
        }break;
        case 3:
        {
            ile2=0;
            printf("Podaj n, n=");scanf("%d",&ile2);
            printf("Podaj k, k=");scanf("%d",&k);
            wynik3=fsilnia(ile2)/(fsilnia(k)*fsilnia(ile2-k));
            printf("Wynik wynosi %d\n",wynik3);
        }break;
        default:printf("NIE MA TAKIEGO ZADANIA\n");break;
        }
        printf("Zakonczyc program?(T/N) ");scanf("%s",&decyzja4);
    }while(decyzja4!='t');
    return 0;
}
void menu4()
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
    printf("               *               [1] Fsuma                          *\n");
    printf("               *               [2] Fsilnia                        *\n");
    printf("               *               [3] n po k                         *\n");
    printf("               *                                                  *\n");
    printf("               ****************************************************\n");
    printf("\n");
}
int fsuma(int n)
{
    int i,s=0;
    for(i=0;i<=n;i++)
        s+=i;
    return s;
}
int fsilnia(int n)
{
    int i,silnia;
    i=1;
    silnia=1;
    while(i<=n)
    {
        silnia*=i;
        i++;
    }
    return silnia;
}
