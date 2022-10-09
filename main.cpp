#include <iostream>
#include <cstdlib>
#include "My_utilities.h"

using namespace std;

double probabilidad(int min = 0, int max = 100, double decimals = 100);

int main()
{
    const int autos = 8;
    string *nombres;
    double *distancia;
    double *velocidad;

    return 0;
}

double probabilidad(int min, int max, double decimals)
{
    return (min + rand() % (max + 1 - min)) / decimals;
}

void paso(double p, double *&distancia, int idx)
{
    if (p > 0.8)
    {
        distancia[idx] += 83;
    }
    else if (p > 0.6)
    {
        distancia[idx] += 50;
    }
    else if (p > 0.4)
    {
        distancia[idx] += 30;
    }
    else if (p > 0.2)
    {
        distancia[idx];
    }
    else
    {
        distancia[idx] -= 10;
    }
}

void inicializador(double *&distancia, double *&velocidad, string *&nombres, int n)
{
    array_creator(distancia, n);
    array_creator(velocidad, n);
}

void finalizador(double *&distancia, double *&velocidad, string *&nombres)
{
    delete[] distancia;
    delete[] velocidad;
    delete[] nombres;
}