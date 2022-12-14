#include <iostream>
#include <cstdlib>
#include "My_utilities.h"

using namespace std;

double probabilidad(int min = 0, int max = 100, double decimals = 100);
void paso(double p, double *&distancia, int *&pasolibre, int idx);
int turno(double *&distancia, string *&nombres, int *&pasolibre, int *&contador, int n);
void inicializador(double *&distancia, string *&nombres, int *&pasolibre, int *&contador, int n);
void finalizador(double *&distancia, string *&nombres, int *&pasolibre, int *&contador);
void sort_carritos(double *&distancia, string *&nombres, int *&contador, int n);
void podio(double *&distancia, string *&nombres, int *&contador, int n);

int main()
{
    srand(time(NULL));
    const int autos = 8;
    string *nombres;
    double *distancia;
    int *pasolibre;
    int *contador;

    inicializador(distancia, nombres, pasolibre, contador, autos);
    turno(distancia, nombres, pasolibre, contador, autos);
    sort_carritos(distancia, nombres, contador, autos);
    podio(distancia, nombres, contador, autos);
    finalizador(distancia, nombres, pasolibre, contador);

    return 0;
}

double probabilidad(int min, int max, double decimals)
{
    return (min + rand() % (max + 1 - min)) / decimals;
}

void paso(double p, double *&distancia, int *&pasolibre, int idx)
{

    if (p > 0.8)
    {

        //(PREGUNTAS OPCIONALES)
        /*
        p = probabilidad(1, 100, 100);
        if (p >= 0.9 && p <= 1)
        {
            distancia[idx] += 13.89;
            pasolibre[idx] = 1;
        }
        else if (p >= 0.5 && p <= 0.6)
        {
            pasolibre[idx] = 5;
        }
        else if (p >= 0.0 && p <= 0.1)
        {
            pasolibre[idx] = 10;
        }
        */
        distancia[idx] += 83;
    }
    else if (p >= 0.6 && p <= 0.8)
    {
        distancia[idx] += 50;
    }
    else if (p >= 0.4 && p < 0.6)
    {
        distancia[idx] += 30;
    }
    else if (p >= 0.2 && p < 0.4)
    {
        pasolibre[idx] = 3;
    }
    else
    {
        distancia[idx] -= 10;
    }
}

int turno(double *&distancia, string *&nombres, int *&pasolibre, int *&contador, int n)
{
    int flag;
    double p;
    while (true)
    {
        flag = 0;
        for (int i = 0; i < n; i++)
        {
            p = probabilidad(0, 100, 100);
            if (pasolibre[i] == 0)
            {
                paso(p, distancia, pasolibre, i);
                contador[i] += 1;
            }
            else if (pasolibre[i] > 0)
            {
                pasolibre[i] -= 1;
                contador[i] += 1;
            }
            else
            {
                flag += 1;
            }

            if (distancia[i] >= 300000.0 /*&& pasolibre[i] != -1*/)
            {
                // cout << "\n\nPasando con " << distancia[i] << " siendo " << nombres[i]; (Puede ser otra manera de imprimir los puestos)
                pasolibre[i] = -1;
            }
        }
        if (flag == n)
        {
            return 0;
        }
    }
}

void podio(double *&distancia, string *&nombres, int *&contador, int n)
{
    cout << "\n\n///////////  R E S U L T A D O S  ///////////\n";
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << "\nGanador: " << nombres[i] << " con: " << contador[i] << " pasos dados y con una distancia recorrida total de: " << distancia[i];
        }
        else
        {
            cout << endl
                 << endl
                 << i + 1 << "?? Puesto: " << nombres[i] << " con: " << contador[i] << " pasos dados y con una distancia recorrida total de: " << distancia[i];
        }
    }
}

void sort_carritos(double *&distancia, string *&nombres, int *&contador, int n)
{
    for (int step = 0; step < n; ++step)
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (contador[i] > contador[i + 1])
            {

                int tempC = contador[i];
                contador[i] = contador[i + 1];
                contador[i + 1] = tempC;

                double tempD = distancia[i];
                distancia[i] = distancia[i + 1];
                distancia[i + 1] = tempD;

                string tempS = nombres[i];
                nombres[i] = nombres[i + 1];
                nombres[i + 1] = tempS;
            }
        }
    }
}

void inicializador(double *&distancia, string *&nombres, int *&pasolibre, int *&contador, int n)
{
    array_creator(distancia, n);
    array_creator(nombres, n);
    array_creator(pasolibre, n);
    array_creator(contador, n);
    string nombre;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese nombre del auto " << i + 1 << ": ";
        cin >> nombre;
        nombres[i] = nombre;
    }
}

void finalizador(double *&distancia, string *&nombres, int *&pasolibre, int *&contador)
{
    delete[] distancia;
    delete[] nombres;
    delete[] pasolibre;
    delete[] contador;
}