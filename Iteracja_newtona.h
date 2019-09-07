#include <iostream>
#ifndef _ITERACJA_NEWTONA_H_
#define _ITERACJA_NEWTONA_H_
#include "Wielomian.h"

struct iteracja_newtona {
public:
    int numer_iteracji = 0;
    float punkt_obecny = 0;

    bool czy_ostatnia (int max_iter);
    bool czy_rozwiazanie (float eps, float punkt_obc, wielomian wiel);
    void nastepna_iteracja();
    float nastepny_punkt(wielomian wiel, float punkt_obc);

};

#endif
