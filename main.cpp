#include "BazaTestu.hh"

int main()
{
    BazaTestu baza;
    LZespolona odpowiedz;
    Statystyka stat;
    WyrazenieZesp pytanie;
    char wyborTrudnosci[1000];
    int iloscProb;                              //proby wpisania wyniku w odpowiednim formacie
    bool czyWyjsc=false;                        //pomocniczy warunek do..while


    cout<<"Wybierz trudnosc - wpisz 'latwy' lub 'trudny'\n";
    std::cin>>wyborTrudnosci;

    InicjalizujTest(&baza,wyborTrudnosci);
    pytanie = *baza.wskTabTestu;

    for(int i=0;i<baza.IloscPytan;i++)
    {
        iloscProb=0;
        if(!PobierzNastpnePytanie(&baza,&pytanie))
            return 1;
        cout<<baza.IndeksPytania<<") "<<pytanie<<std::endl;

        do
        {
        std::cin>>odpowiedz;
        if(std::cin.fail())
        {
            czyWyjsc=false;
            std::cin.clear();
            while(std::cin.get()!='\n');
                //std::cin.ignore();
            cout<<"Bledny format, poprawny format to '(a+bi)'\n";
            if(iloscProb<2)
                cout<<"Sproboj ponownie, pozostale proby: "<<2-iloscProb<<"\n";
        }
        else
            czyWyjsc=true;
        iloscProb++;
        }
        while(iloscProb<3&&!czyWyjsc);
        if(odpowiedz==Oblicz(pytanie))
        {
            dodajPoprawnaOdp(stat);
            cout<<"Odpowiedz poprawna\n";
        }
        else
        {
            dodajBlednaOdp(stat);
            cout<<"Odpowiedz bledna, poprawna odpowiedz to "<<Oblicz(pytanie)<<std::endl;
        }

    }
    Wyswietl(stat);



return 0;
}
