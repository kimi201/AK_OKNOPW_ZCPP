#include <iostream>
#include "Iteracja_newtona.h"
#include "Wielomian.h"

using namespace std;

void iteracja_newtona::nastepna_iteracja(){
    numer_iteracji += 1;

}

bool iteracja_newtona::czy_ostatnia (int max_iter) {
    bool czy_ostatnia = numer_iteracji == max_iter ;

    return czy_ostatnia;
}

bool iteracja_newtona::czy_rozwiazanie (float eps, float punkt_obc, wielomian wiel) {
    bool czy_rozwiazanie = wiel.wartosc_wielomianu(punkt_obc) <= eps && wiel.wartosc_wielomianu(punkt_obc) >= -eps;

    return czy_rozwiazanie;
}


float iteracja_newtona::nastepny_punkt(wielomian wiel, float punkt_obc) {
    float nastepny_punkt = punkt_obc - wiel.wartosc_wielomianu(punkt_obc)/wiel.wartosc_pochodnej_wielomianu(punkt_obc);

    return nastepny_punkt;
}
