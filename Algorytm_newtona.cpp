#include <iostream>
#include "Algorytm_newtona.h"
#include "Wielomian.h"

using namespace std;

void algorytm_newtona::rozwiaz (wielomian wiel) {
float punkt_obc = punkt_startowy;
    while (! iter.czy_ostatnia(max_iteracji) && ! iter.czy_rozwiazanie(dokladnosc, punkt_obc, wiel))
    {
        iter.nastepna_iteracja();
        punkt_obc = iter.nastepny_punkt(wiel, punkt_obc);

        cout << endl << iter.numer_iteracji << ". " << "W(" << punkt_obc << ") = " << wiel.wartosc_wielomianu(punkt_obc) ;

    }

    if (iter.czy_rozwiazanie(dokladnosc, punkt_obc, wiel)){
        cout << endl << endl << "Po " << iter.numer_iteracji << " iteracjach uzyskano rozwiazanie. Pierwiastek wielomianu W(x) znajduje sie w punkcie " << punkt_obc << endl;
    }
    else {
        cout << endl << endl << "Po " << iter.numer_iteracji << " iteracjach nie uzyskano rozwiazania. Zwieksz liczbe iteracji lub zmiejsz dokladnosc." << endl;
    }


}

algorytm_newtona::algorytm_newtona(int iter, float eps, float pkt) {
max_iteracji = iter;
punkt_startowy = pkt;
dokladnosc = eps;

}
