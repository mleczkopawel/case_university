#ifndef MAIN_H7
#define MAIN_H7

    struct towar{
        char nazwa[15];
        int liczbaszt;
        double cena;
    };

    int nr7,l;
    char decyzja7='n';

    struct towar base;
    struct towar base2[2];

    void menu7();
    void wpisz(struct  towar *ddb);
    void wypisz(struct towar *ddb);
    void dodajstr(int n, struct towar *ddb);
    void wypiszstr(int n, struct towar *ddb);
    void towary(int n, int x, struct towar *ddb);
#endif // MAIN_H7
