#include <stdio.h>
#include <string.h>

#include "struktury.h";

int main7(void)
{

    do{
        system("cls");
        menu7();
        printf("Podaj numer opcji ");scanf("%i",&nr7);
        switch (nr7) {
        case 1:wpisz(&base);break;
        case 2:wypisz(&base);break;
        case 3:dodajstr(2,&base2);break;
        case 4:wypiszstr(2,&base2);break;
        case 5:{
            printf("podaj min sztuk na stanie ");scanf("%d",&l);
            towary(2,l,&base2);
        };break;
        default:printf("NIE MA TAKIEJ OPCJI!!!\n");break;
        }
        printf("Zakonczyc program?(T/N) ");scanf("%s",&decyzja7);
    }while(decyzja7!='t');
    return 0;
}
void menu7()
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
    printf("               *               [1] Tworzenie stuktury             *\n");
    printf("               *               [2] Wypisywanie struktury          *\n");
    printf("               *               [3] Tworzenie tablicy struktur     *\n");
    printf("               *               [4] Wypisywanie tablicy struktur   *\n");
    printf("               *               [5] Wypisywanie rekordow mniejszych*\n");
    printf("               *                                                  *\n");
    printf("               ****************************************************\n");
    printf("\n");
}
void wpisz(struct towar *ddb)
{
    printf("nazwa ");scanf("%s",&ddb->nazwa);
    printf("liczba sztuk ");scanf("%d",&ddb->liczbaszt);
    printf("cena ");scanf("%lf",&ddb->cena);
}
void wypisz(struct towar *ddb)
{
        printf("nazwa %s\n",ddb->nazwa);
        printf("liczba sztuk %d\n",ddb->liczbaszt);
        printf("cena %.2f\n",ddb->cena);
}
void dodajstr(int n, struct towar *ddb)
{
    int i;
    for(i=0;i<n;i++)
    {
        wpisz(&ddb[i]);
        printf("******************\n");
    }
}
void wypiszstr(int n, struct towar *ddb)
{
    int i;
    for(i=0;i<n;i++)
    {
        wypisz(&ddb[i]);
        printf("******************\n");
    }
}
void towary(int n, int x, struct towar *ddb)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(ddb[i].liczbaszt<x)
        {
            wypisz(&ddb[i]);
            printf("******************\n");
        }
    }
}
