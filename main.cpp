#include <typeinfo>
#include <cstddef>
#include "pisici.hpp"


using namespace std;


int main()
{

    Pisici *v;
    v = new Pisici[300];

    v[0] = *(new Pisici(1 , "Meow", "alb", "Jucaus", true)) ;
    v[1] = *(new Pisici(0 , "Blanita", "negru", "Somnorosa", true)) ;
    v[2] = *(new Pisici(5 , "Gugu", "colorat", "Prietenos", true)) ;
    v[3] = *(new Pisici(2 , "Tumpi", "negru", "Rapid", false)) ;


    for(int i = 0; i < 4; i++)
        v[i].afisare();

    cout << "Numarul de zile in care cafenea ajunge la capacitate <=50 la suta este: " << 150/2 + 1 << endl ;

    int capacitate = 298, zile = 100, mancare_consumata = 0;

    while( zile > 0 )  
    { mancare_consumata = mancare_consumata + capacitate * 100;
        capacitate -= 2;
        zile--;
    
    }

    cout << mancare_consumata/1000 << "kg" << endl ;

    char *tip = new char[7];
    int pui = 0, tinere = 0, mature = 0;

    for(int i = 0; i < 4; i++)
    { strcpy(tip, v[i].getTip());
        if(strcmp( tip, "pui") == 0)
                pui ++;
            else if(strcmp( tip, "tinere") == 0)
            tinere ++;
                 else mature ++;
    }

    cout << "Numarul de pui din cafenea este " << pui << endl ;
    cout << "Numarul de pisici tinere din cafenea este " << tinere << endl ;
    cout << "Numarul de pisici mature din cafenea este " << mature << endl << endl ;\

    Pisici aux;

    for(int i = 0; i < 5; i++)
		for(int j = i; j <4; j++)
			if(v[i].getLungimeDes()<v[j].getLungimeDes())
			{
				aux = v[i];
				v[i] = v[j];
				v [j] = aux;

			}

    cout <<	endl << "Top 3 pisici smechere: " << endl;
	for(int i = 0; i < 3; i++)
		v[i].afisare2();

delete []v;
}