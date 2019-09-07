#include <iostream>
#ifndef _ALGORYTM_NEWTONA_H_
#define _ALGORYTM_NEWTONA_H_
#include "Wielomian.h"
#include "Iteracja_newtona.h"

struct algorytm_newtona {
public:
    int max_iteracji = 2;
    float punkt_startowy = 0;
    float dokladnosc = 0;
    iteracja_newtona iter;

    void dodaj_iteracje();
    void rozwiaz (wielomian wiel);
    algorytm_newtona(int iter, float eps, float pkt);
};



#endif
