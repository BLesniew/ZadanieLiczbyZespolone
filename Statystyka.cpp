#include "Statystyka.hh"

void Wyswietl(Statystyka Stat)
{
    std::cout<<"Wynik:\nDobrych odpowiedzi:"<<Stat.lDobrychOdpowiedzi<<"\nWszystkichOdpowiedzi:"
    <<Stat.lWszystkichOdpowiedzi<<"\nDobre odpowiedzi stanowia "<<100.0*Stat.lDobrychOdpowiedzi/Stat.lWszystkichOdpowiedzi<<"%\n";
}

void dodajBlednaOdp(Statystyka &Stat)
{
    Stat.lWszystkichOdpowiedzi++;
}

void dodajPoprawnaOdp(Statystyka &Stat)
{
    Stat.lDobrychOdpowiedzi++;
    Stat.lWszystkichOdpowiedzi++;
}
