#ifndef PISICI_HPP
#define PISICI_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Pisici
{
    int varsta;
    char *nume;
    char *culoare;
    char *descriere;
    char *tip;
    bool vaccin;
    
public:
		Pisici();
		Pisici(int, const char*,  const char*, const char*, bool);
		
		void afisare();
        char* getTip();
        int getLungimeDes();
        void afisare2();

};

#endif