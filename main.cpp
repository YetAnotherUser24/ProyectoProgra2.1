#include <iostream>
#include <cstdlib>
#include "My_utilities.h"

using namespace std;

double probabilidad(int min = 0, int max = 100, double decimals = 100);

int main()
{
    double *distancia;
    double *velocidad;

    return 0;
}

double probabilidad(int min, int max, double decimals)
{
    return (min + rand() % (max + 1 - min)) / decimals;
}

void paso(double p, double distancia)
{
}

void inicializador(double *&distancia, double *&velocidad)
{
    array_creator(distancia, 8);
    array_creator(velocidad, 8);
}

void finalizador(double *&distancia, double *&velocidad)
{
    delete[] distancia;
    delete[] velocidad;
}