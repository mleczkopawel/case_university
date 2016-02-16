#ifndef MAIN6
#define MAIN6
    char decyzja6='n';
    int nr6;
    void menu6();

    int tab[5]={-5,6,8,0,-7},tab2[5]={1,2,3,4,5},tab3[5];
    double tab4[5]={1,2,3,4,5},*t4;
    int tabx1[2][5]={{1,2,3,4,5},{21,22,23,24,25}},tabx2[2][5];
    int tabx3[3][3]={{11,12,13},{21,22,23},{31,32,33}},tabx4[3][3];
    int tabx5[5][5]={{11,12,13,14,15},{21,22,23,2,25},{31,32,33,34,35},{41,0,43,44,45},{51,52,53,54,55}};
    int tabx6[3][3]={{11,12,13},{21,22,23},{31,32,33}},*tx6;
    int *t,*t2,*t3,tem,*tx1,*tx2,*tx3,*tx4,*tx5;
    int dz,sm,li=5,liczba,liczba2,l1=3,l2=3,*ll1,*ll2,maxx;
    unsigned int *t5;

    void tablica1(int x, int *y);
    void tablica2(int *x, int *y, int *z, int a);
    void tablice3(int *x, int y, int z);
    int tablice4(int x, int *y);
    void zamiana2(int *x ,int *y);

    int zad1_tablice(int x, int y, int *z);
    void zad2_tablice(int x, int *y);
    void zad3_tablice(int x, int *y);
    void zad4_tablice(int x, int *y);
    void zad5_tablice(int x, int *y);

    void zad10_tablice(int x, int y, int *z);
    void zad11_tablice(int x, int y, int *z);
    void zad12_tablice(int x, double *y);
    void zad13_tablice(int *x, int *y, int *z,int a);
    void zad14_tablice(int x, unsigned int *y);
    void zad15_tablice(int x, unsigned int *y);
    void zad16a_tablice(int x, unsigned int *y, int a, int b);
    void zad16_tablice(int x, unsigned int *y);
    void zad17a_teblice(int x, unsigned int *y);
    int zad17b_tablice(int x, unsigned int *y);
    void wypisztx(int x, int y, int z[x][y]);
    void zad18_tablice(int x, int y, int a[x][y], int b[x][y]);
    void zad19_tablice(int x, int y, int z[x][y]);

    void zad20_tablice(int x, int y, int z[x][y]);
    void zad21_tablice(int x, int y, int z[x][y]);
    int zad22a_tablice(int x, int y, int z[x][y]);
    void zad22_tablice(int x, int y, int z[x][y]);
    void zad23_teblice(int x, int y, int z[x][y]);
    void zad24_tablice(int x, int y, int z[x][y]);
    void zad25_tablice(int x, int y, int z[x][y], int zz[x][y]);
    void randtx(int x, int y, int z[x][y]);
    void zad26_tablice(int x, int y, int *z, int *zz, int *zzz);
    void zad27_tablice(int x, int y, int *z);
    void zad28_tablice(int x, int y, int z[x][y]);

    void zad30_tablice(int a, int x, int y, int z[x][y]);
    int zad31_tablice(int *a, int *b, int x, int y, int z[x][y]);
#endif // MAIN6
