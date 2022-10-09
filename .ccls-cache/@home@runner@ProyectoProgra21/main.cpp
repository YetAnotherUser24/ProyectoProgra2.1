#include <iostream>
#include <cstdlib>
#include "My_utilities.h"

using namespace std;

double probabilidad(int min = 0, int max = 100, double decimals = 100);

int main()
{
    return 0;
}

double probabilidad(int min, int max, double decimals)
{
    return (min + rand() % (max + 1 - min)) / decimals;
}
