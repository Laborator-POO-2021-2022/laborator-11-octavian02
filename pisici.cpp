#include "pisici.hpp"

Pisici::Pisici():varsta(0), nume(NULL), culoare(NULL), descriere(NULL), tip(NULL), vaccin(0)
{

}

Pisici::Pisici(int v, const char *n, const char *c, const char *d, bool vac)
{
    varsta = v;
    nume = new char[strlen(n)];
    strcpy(nume, n);
    culoare = new char[strlen(c)];
    strcpy(culoare, c);
    descriere = new char[strlen(d)];
    strcpy(descriere, d);

    tip = new char[7];
    if(varsta <= 1)
        strcpy(tip, "pui");
            else if(varsta <= 3)
                strcpy(tip, "tinere");
            else strcpy(tip, "mature");

    vaccin = vac;

}

void Pisici::afisare()
{
    cout << "Varsta este: " << varsta << endl ;
    cout << "Numele pisicii este: " << nume << endl ;
    cout << "Culoarea pisicii este: " << culoare << endl ;
    cout << "O scurta descriere despre pisica: " << descriere << endl ;
    cout << tip << endl ;
    if( vaccin == 1)
    cout << "Este vaccinat" << endl ;
        else cout << "Nu este vaccinat" << endl;
    cout << endl;

}

char* Pisici::getTip()
{
    return tip;

}

int Pisici::getLungimeDes()
{
    return strlen(descriere);

}

void Pisici::afisare2()
{   
    cout << "Numele pisicii este: " << nume << endl ;;
    cout << "Varsta este: " << varsta << endl ;
    cout << "O scurta descriere despre pisica: " << descriere << endl ;
    if( vaccin == 1)
    cout << "Este vaccinat" << endl ;
        else cout << "Nu este vaccinat" << endl;
    cout << endl;

}