#include <iostream>
#include <conio.h>
#include <stdio.h>

#include "Czlon_wielomianu.h"
#include "wielomian.h"
#include "Algorytm_newtona.h"
#include "Iteracja_newtona.h"

using namespace std;

int main()
{
    float punkt = 0;
    int max_iter = 0;
    float wspolczynnik = 1;
    int wykladnik = 1, i = 0;
    float dokladnosc = 1e-5;

    cout << "Program oblicza miejsce zerowe wprowadzonego wielomianu meoda Newtona z zadana dokladnoscia." << endl
    << "Podaj maksymalna liczbe iteracji, punkt startowy orz dokladnosc algorytmu: " << endl
    << endl << "Liczba iteracji: " ;
    cin >> max_iter;
    cout << "Punkt startowy: ";
    cin >> punkt;
    cout << "Dokladnosc: ";
    cin >> dokladnosc;
    cout << endl << "Ponizej wpisz kolejne czlony wielomianu. Pamietaj, ze wspolczynnik moze byc liczba dziesietna (uzyj kropki jako separatora), natomiast wykladnik musi byc liczba naturalna." << endl
    << "Aby zakonczyc wprowadzanie wielomianu, podaj wspolczynnik rowny 0." << endl << endl;

    wielomian *W = new wielomian;

    while (wspolczynnik !=0)
    {
        i++;

        cout << "Wpisz wspolczynnik i wykladnik czlonu " << i << ":" << endl;
        cout << "Wspolczynnik: ";
        cin >> wspolczynnik;

        cout << "Wykladnik: ";
        cin >> wykladnik;
        cout << endl;

        if (wspolczynnik!=0)
            W->dodaj_czlon(wykladnik, wspolczynnik);
    }

    cout << endl << "Wprowadzony wielomian: " << endl;

    W->wyswietl_wielomian();

    cout << endl  << endl << "Kolejne oszacowanie miejsca zerowego: ";

    algorytm_newtona Alg (max_iter,dokladnosc, punkt);
    Alg.rozwiaz(*W);


    delete(W);

    getch();
    return 0;
}
