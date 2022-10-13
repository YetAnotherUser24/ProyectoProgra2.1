
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <vector>

using namespace std;

void clear(string command)
{
    string enter;
    cin.ignore();
    getline(cin, enter, '\n');
    cout << "\x1B[2J\x1B[H";
}
void clear()
{
    cout << "\x1B[2J\x1B[H";
}

void matrix_clear(double **&M, int f)
{
    for (int i = 0; i < f; i++)
    {
        delete[] M[i];
    }
    delete[] M;
    M = nullptr;
}
void matrix_clear(string **&M, int f)
{
    for (int i = 0; i < f; i++)
    {
        delete[] M[i];
    }
    delete[] M;
    M = nullptr;
}
void matrix_clear(int **&M, int f)
{
    for (int i = 0; i < f; i++)
    {
        delete[] M[i];
    }
    delete[] M;
    M = nullptr;
}

void matrix_creator(double **&ppMatriz, int filas, int cols)
{
    ppMatriz = new double *[filas]();
    for (int i = 0; i < filas; i++)
    {
        ppMatriz[i] = new double[cols]();
    }
}
void matrix_creator(string **&ppMatriz, int filas, int cols)
{
    ppMatriz = new string *[filas]();
    for (int i = 0; i < filas; i++)
    {
        ppMatriz[i] = new string[cols]();
    }
}
void matrix_creator(int **&ppMatriz, int filas, int cols)
{
    ppMatriz = new int *[filas]();
    for (int i = 0; i < filas; i++)
    {
        ppMatriz[i] = new int[cols]();
    }
}

void matrix_filler(double **&ppMatriz, int filas, int cols, int min, int max, int decimals)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            ppMatriz[i][j] = (min + rand() % (max + 1 - min)) / double(decimals);
        }
    }
}
void matrix_filler(string **&ppMatriz, int filas, int cols, int min, int max)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            ppMatriz[i][j] = char(min + rand() % (max + 1 - min));
        }
    }
}
void matrix_filler(int **&ppMatriz, int filas, int cols, int min, int max)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            ppMatriz[i][j] = min + rand() % (max - min + 1);
        }
    }
}

void matrix_printer(double **ppMatriz, int filas, int cols)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(8) << ppMatriz[i][j];
        }
        cout << endl;
    }
}
void matrix_printer(string **ppMatriz, int filas, int cols)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(8) << ppMatriz[i][j];
        }
        cout << endl;
    }
}
void matrix_printer(int **ppMatriz, int filas, int cols)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(8) << ppMatriz[i][j];
        }
        cout << endl;
    }
}

void array_creator(double *&arr, int n)
{
    arr = new double[n]();
}
void array_creator(string *&arr, int n)
{
    arr = new string[n]();
}
void array_creator(int *&arr, int n)
{
    arr = new int[n]();
}
void array_creator(bool *&arr, int n)
{
    arr = new bool[n]();
}

void array_filler(double *arr, int n, int min, int max, int decimals)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = (min + rand() % (max + 1 - min)) / double(decimals);
    }
}
void array_filler(string *arr, int n, int min, int max)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = char(min + rand() % (max + 1 - min));
    }
}
void array_filler(int *arr, int n, int min, int max)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = min + rand() % (max + 1 - min);
    }
}

void array_printer(double *arr, int n)
{
    cout << "\n[  ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << "]";
}
void array_printer(string *arr, int n)
{
    cout << "\n[  ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << "]";
}
void array_printer(int *arr, int n)
{
    cout << "\n[  ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << "]";
}

void vector_filler(vector<double> &vec, int min, int max, int decimals)
{
    for (auto &element : vec)
    {
        element = (min + rand() % (max + 1 - min)) / double(decimals);
    }
}
void vector_filler(vector<string> &vec, int min, int max)
{
    for (auto &element : vec)
    {
        element = char(min + rand() % (max + 1 - min));
    }
}
void vector_filler(vector<int> &vec, int min, int max)
{
    for (auto &element : vec)
    {
        element = min + rand() % (max + 1 - min);
    }
}

void vector_printer(vector<double> &vec)
{
    cout << "[";
    for (auto &element : vec)
    {
        cout << setw(5) << element;
    }
    cout << "  ]";
}
void vector_printer(vector<string> &vec)
{
    cout << "[";
    for (auto &element : vec)
    {
        cout << setw(5) << element;
    }
    cout << "  ]";
}
void vector_printer(vector<int> &vec)
{
    cout << "[";
    for (auto &element : vec)
    {
        cout << setw(5) << element;
    }
    cout << "    ]";
}
