#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH
#include <math.h>
#include <iostream>

using std::cout;

/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};


/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */


LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);

LZespolona  operator - (LZespolona Skl1, LZespolona Skl2);

LZespolona  operator * (LZespolona Skl1, LZespolona Skl2);

LZespolona  operator / (LZespolona Skl1, LZespolona Skl2);

LZespolona operator / (LZespolona lzesp, double re);

bool operator == (LZespolona Skl1, LZespolona Skl2);

bool operator != (LZespolona Skl1, LZespolona Skl2);

std::istream &operator >> (std::istream &strm, LZespolona &lzesp);

std::ostream &operator << (std::ostream &strm, LZespolona lzesp);

double Modul(LZespolona lzesp);

LZespolona Sprzezenie(LZespolona lzesp);

LZespolona Utworz(double re,double im);

void Wyswietl(LZespolona lzesp);

#endif
