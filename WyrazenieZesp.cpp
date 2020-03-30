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
        strm.setstate(std::ios::failbit);
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

        default:
        break;

    }
    return strm;
}

std::istream &operator >> (std::istream &strm, WyrazenieZesp &WZ)
{
    strm>>WZ.Arg1;
    if(strm.fail())
    {
        cout<<"Wczytywanie wyrazenia nie powiodlo sie, niepoprawny format\n";
        strm.clear();
        return strm;
    }

    strm>>WZ.Op;
    if(strm.fail())
    {
        cout<<"Wczytywanie wyrazenia nie powiodlo sie, niepoprawny format\n";
        strm.clear();
        return strm;
    }
    strm>>WZ.Arg2;
    if(strm.fail())
    {
        cout<<"Wczytywanie wyrazenia nie powiodlo sie, niepoprawny format\n";
        strm.clear();
    }
    return strm;
}

std::ostream &operator << (std::ostream &strm, WyrazenieZesp &WZ)
{
    strm<<WZ.Arg1<<WZ.Op<<WZ.Arg2;
    return strm;
}

LZespolona Oblicz(WyrazenieZesp  WyrZ)
{
    switch(WyrZ.Op)
    {
        case Op_Dodaj:
        return WyrZ.Arg1+WyrZ.Arg2;
        break;

        case Op_Odejmij:
        return WyrZ.Arg1-WyrZ.Arg2;
        break;

        case Op_Mnoz:
        return WyrZ.Arg1*WyrZ.Arg2;
        break;

        case Op_Dziel:
        return WyrZ.Arg1/WyrZ.Arg2;
        break;

        default:
        break;
    }
}
