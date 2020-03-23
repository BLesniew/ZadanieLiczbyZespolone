#include "WyrazenieZesp.hh"


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

std::istream &operator >> (std::istream &strm, Operator &Op)
{
    char znak;
    strm>>znak;
    switch(znak)
    {
        case '+':
        Op=Op_Dodaj;
        break;

        case '-':
        Op=Op_Odejmij;
        break;

        case '*':
        Op=Op_Mnoz;
        break;

        case '/':
        Op=Op_Dziel;
        break;

        default:
                                                                          //zepsuj strumień failbit
        break;
    }
    return strm;
}

std::ostream &operator << (std::ostream &strm, Operator Op)
{
    switch(Op)
    {
        case Op_Dodaj:
        strm << '+';
        break;

        case Op_Odejmij:
        strm << '-';
        break;

        case Op_Mnoz:
        strm << '*';
        break;

        case Op_Dziel:
        strm << '/';
        break;

        default:                                 //czy trzeba coś więcej?
        break;

    }
    return strm;
}

std::istream &operator >> (std::istream &strm, WyrazenieZesp &WZ)
{
    strm>>WZ.Arg1;
    if(strm.fail())
        return strm;
    strm>>WZ.Op;
    if(strm.fail())
        return strm;
    strm>>WZ.Arg2;
    return strm;
}

std::ostream &operator << (std::ostream &strm, WyrazenieZesp WZ)
{
    strm<<WZ.Arg1<<WZ.Op<<WZ.Arg2<<std::endl;
    return strm;
}

LZespolona Oblicz(WyrazenieZesp  WyrZ)
{

}
