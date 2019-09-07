#include <iostream>
#include "Wielomian.h"
#include "Czlon_wielomianu.h"

using namespace std;

wielomian::wielomian(){
    pierwszy=0;
}

void wielomian::dodaj_czlon(int wyk, float wsp) {
    czlon_wielomianu *nowy = new czlon_wielomianu;

    nowy->wykladnik = wyk;
    nowy->wspolczynnik = wsp;

    if (pierwszy==0)
    {
        pierwszy=nowy;
    }

    else
    {
        czlon_wielomianu *temp = pierwszy;

        while (temp->nastepny) //poszukiwanie wskaznika na ostatni element
            {
                temp = temp->nastepny;
            }
        temp->nastepny = nowy;
        nowy->nastepny = 0;
    }

}

void wielomian::wyswietl_wielomian(){
    czlon_wielomianu *temp = pierwszy;

    cout << "W(x) = ";
    while (temp)
    {
    string znak="";
    float abs_wspolczynnik;
    if (temp->wspolczynnik > 0) {
        znak = " + ";
        abs_wspolczynnik = temp->wspolczynnik;
        }
    else {
        znak = " - ";
        abs_wspolczynnik = - temp->wspolczynnik;
        }

    cout << znak << abs_wspolczynnik << "x^" << temp->wykladnik;
    temp=temp->nastepny;
    }

}


float wielomian::wartosc_wielomianu(float punkt) {

    czlon_wielomianu *temp = pierwszy;
    float wartosc_wielomianu = 0;

    while (temp)
    {
    wartosc_wielomianu += temp->wartosc(punkt);

    temp=temp->nastepny;
    }

    return wartosc_wielomianu;

}

float wielomian::wartosc_pochodnej_wielomianu(float punkt) {

    czlon_wielomianu *temp = pierwszy;
    float wartosc_pochodnej_wielomianu = 0;

    while (temp)
    {
    wartosc_pochodnej_wielomianu += temp->wartosc_pochodnej(punkt);

    temp=temp->nastepny;
    }

    return wartosc_pochodnej_wielomianu;

}
