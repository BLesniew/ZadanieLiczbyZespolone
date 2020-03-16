#include <iostream>
#include "BazaTestu.hh"




/*int main(int argc, char **argv)
{

  if (argc < 2) {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }



  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;

  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {
    cout << " Czesc rzeczywista pierwszego argumentu: ";
    cout << WyrZ_PytanieTestowe.Arg1.re << endl;
  }


  cout << endl;
  cout << " Koniec testu" << endl;
  cout << endl;

}
*/

int main()
{
    LZespolona liczba1 = Utworz(2,3);
    Wyswietl(liczba1);
    LZespolona liczba2 = Utworz(3,-2);
    Wyswietl(liczba2);
    LZespolona liczba3 = liczba1+liczba2;
    Wyswietl(liczba3);

return 0;
}
