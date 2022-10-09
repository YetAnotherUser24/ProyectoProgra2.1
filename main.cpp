#include <iostream>
#include <cstdlib>
#include "My_utilities.h"

using namespace std;

double probabilidad(int min = 0, int max = 100, double decimals = 100);
void paso(double p, double *&distancia, bool *&pasolibre, int idx);
int turno(double *&distancia, string *&nombres, int *&pasolibre, int *&contador, int n);
void inicializador(double *&distancia, double *&velocidad, string *&nombres, int *&pasolibre, int *&contador, int n);
void finalizador(double *&distancia, double *&velocidad, string *&nombres, int *&pasolibre, int *&contador);
void podio(double *&distancia, string *&nombres, double *&contador, int n);

int main()
{
    const int autos = 8;
    string *nombres;
    double *distancia;
    double *velocidad;
    int *pasolibre;
    int *contador;
    
    inicializador(distancia,velocidad,nombres,pasolibre,contador,autos);
    turno(distancia,nombres,pasolibre,contador, autos);
    finalizador(distancia, velocidad, nombres, pasolibre, contador, autos);
    podio(distancia,nombres,contador,8);
    return 0;
}

double probabilidad(int min, int max, double decimals)
{
    return (min + rand() % (max + 1 - min)) / decimals;
}

void paso(double p, double *&distancia, bool *&pasolibre, int idx)
{
    
    if (p > 0.8)
    {
        distancia[idx] += 83;
    }
    else if (p >= 0.6 && p<0.8)
    {
        distancia[idx] += 50;
    }
    else if (p >= 0.4 && p<0.6)
    {
        distancia[idx] += 30;
    }
    else if (p >= 0.2 && p<0.4)
    {
        pasolibre[idx] = 3;
    }
    else
    {
        distancia[idx] -= 10;
    }
}

int turno(double *&distancia, string *&nombres, int *&pasolibre, int *&contador, int n){
    while true{
        for(int i=0; i<n; i++){
            p = probabilidad(0,1,100);
            if (pasolibre[i]==0){
                paso(p,distancia,nombres,pasolibre, contador,i);
            }
            else {pasolibre[i] -= 1;}
            contador[i] += 1;

            if (distancia[i] >= 300000){ array_printer(distancia,8);
;return 0;}
        }
    }
}

void podio(double *&distancia, string *&nombres, double *&contador, int n){
    for (int i=0; i< n; i++){
        if (distancia[i]>=300000){
            cout << "Ganador: " << nombres[i] << "    Cantidad de pasos: " << contador[i];
            distancia[i]=0;
        }
    }
    array_printer(distancia,8);
    int n=0,temp=distancia[n];
    for (int i=0; i< n; i++){
        if (distancia[i]>=temp){
            temp=distancia[i];n=i;
        }}
    cout << "2do puesto: " << nombres[n] << "    Cantidad de pasos: " << contador[n];
  distancias[n]=0;
  array_printer(distancia,8);
    n=0;
   temp=distancia[n];
    for (int i=0; i< n; i++){
        if (distancia[i]>=temp){
            temp=distancia[i];n=i;
        }}
    cout << "3er puesto: " << nombres[n] << "    Cantidad de pasos: " << contador[n];
}

void inicializador(double *&distancia, double *&velocidad, string *&nombres, int *&pasolibre, int *&contador, int n)
{
    array_creator(distancia, n);
    array_creator(velocidad, n);
    array_creator(nombres, n);
    array_creator(pasolibre, n);
    array_creator(contador, n);
    string nombre;
    for (int i=0;i<n;i++)
    {
      cout<<"Ingrese nombre del auto "<<i+1<<": ";cin>>nombre;
      nombres[i]=nombre;
    }
}

void finalizador(double *&distancia, double *&velocidad, string *&nombres, int *&pasolibre, int *&contador)
{
    delete[] distancia;
    delete[] velocidad;
    delete[] nombres;
    delete[] pasolibre;
    delete[] contador;
}