#ifndef STATYSTYKA_HH
#define STATYSTYKA_HH

#include <iostream>

struct Statystyka{
    int lWszystkichOdpowiedzi=0;
    int lDobrychOdpowiedzi=0;
};

void Wyswietl(Statystyka Stat);
void dodajPoprawnaOdp(Statystyka &Stat);
void dodajBlednaOdp(Statystyka &Stat);

#endif // STATYSTYKA_HH
