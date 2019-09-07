#include <iostream>
#ifndef _WIELOMIAN_H_
#define _WIELOMIAN_H_
#include "Czlon_wielomianu.h"

struct wielomian {
public:
    czlon_wielomianu *pierwszy; //poczatek
    void dodaj_czlon (int wyk, float wsp);
    void wyswietl_wielomian();

    float wartosc_wielomianu(float punkt);
    float wartosc_pochodnej_wielomianu(float punkt);

    wielomian();
};

#endif
