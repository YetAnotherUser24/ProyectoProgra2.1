#include <iostream>
#include "My_utilities.h"

using namespace std;

int main()
{
    int a = 2;
    int *arr;
    cout << a;

    array_creator(arr, 3);
    array_filler(arr, 3);
    array_printer(arr, 3);
    delete[] arr;
    arr = nullptr;
    return 0;
}
