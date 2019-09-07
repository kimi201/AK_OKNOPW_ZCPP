#include <iostream>
#ifndef _CZLON_WIELOMIANU_H_
#define _CZLON_WIELOMIANU_H_


struct czlon_wielomianu {
public:
    int wykladnik;
    float wspolczynnik;
    czlon_wielomianu *nastepny;
    float wartosc(float punkt);
    float wartosc_pochodnej(float punkt);


    czlon_wielomianu(); //konstruktor
};

#endif // _CZLON_WIELOMIANU_H_
