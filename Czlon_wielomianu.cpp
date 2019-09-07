#include "Czlon_wielomianu.h"
#include <cmath>

czlon_wielomianu::czlon_wielomianu() {
    nastepny=0;
}

float czlon_wielomianu::wartosc(float punkt) {
    float wartosc = wspolczynnik * pow(punkt,wykladnik);

    return wartosc;
}


float czlon_wielomianu::wartosc_pochodnej(float punkt) {
    float wartosc_pochodnej = wykladnik * wspolczynnik * pow(punkt,wykladnik - 1);

    return wartosc_pochodnej;
}
