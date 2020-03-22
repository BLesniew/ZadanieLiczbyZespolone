#include "LZespolona.hh"



/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;

  return Wynik;
}

LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;

  return Wynik;
}

LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re * Skl2.re - Skl1.im * Skl2.im;
  Wynik.im = Skl1.im * Skl2.re + Skl1.re * Skl2.im;

  return Wynik;
}

LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik=Skl1*Sprzezenie(Skl2)/(Modul(Skl2)*Modul(Skl2));

  return Wynik;
}

LZespolona operator / (LZespolona number, double re)
{
    LZespolona Wynik;

    Wynik.re = number.re/re;
    Wynik.im = number.im/re;

    return Wynik;
}

double Modul(LZespolona number)
{
    return sqrt(number.im*number.im+number.re*number.re);
}

LZespolona Utworz(double re, double im)
{
    LZespolona liczba;

    liczba.re = re;
    liczba.im = im;

    return liczba;
}

LZespolona Sprzezenie(LZespolona lzesp)
{
    LZespolona Wynik;

    Wynik.re=lzesp.re;
    Wynik.im=-lzesp.im;

    return Wynik;
}

void Wyswietl(LZespolona lzesp)
{
    cout<<"("<<lzesp.re<<std::showpos<<lzesp.im<<"i)"<<std::noshowpos<<std::endl;
}
