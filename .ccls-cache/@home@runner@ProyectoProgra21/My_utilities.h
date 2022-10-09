#include <iostream>
#include <vector>
using namespace std;

void clear(string command);
void clear();

void matrix_clear(double **&M, int f);
void matrix_clear(string **&M, int f);
void matrix_clear(int **&M, int f);

void matrix_creator(double **&ppMatriz, int filas, int cols);
void matrix_creator(string **&ppMatriz, int filas, int cols);
void matrix_creator(int **&ppMatriz, int filas, int cols);

void matrix_filler(double **&ppMatriz, int filas, int cols, int min = 0, int max = 100, int decimals = 100);
void matrix_filler(string **&ppMatriz, int filas, int cols, int min = 0, int max = 255);
void matrix_filler(int **&ppMatriz, int filas, int cols, int min = 0, int max = 100);

void matrix_printer(double **ppMatriz, int filas, int cols);
void matrix_printer(string **ppMatriz, int filas, int cols);
void matrix_printer(int **ppMatriz, int filas, int cols);

void array_creator(double *&arr, int n);
void array_creator(string *&arr, int n);
void array_creator(int *&arr, int n);

void array_filler(double *arr, int n, int min = 0, int max = 100, int decimals = 100);
void array_filler(string *arr, int n, int min = 0, int max = 255);
void array_filler(int *arr, int n, int min = 0, int max = 100);

void array_printer(double *arr, int n);
void array_printer(string *arr, int n);
void array_printer(int *arr, int n);

void vector_filler(vector<double> &vec, int min = 0, int max = 100, int decimals = 100);
void vector_filler(vector<string> &vec, int min = 0, int max = 255);
void vector_filler(vector<int> &vec, int min = 0, int max = 100);

void vector_printer(vector<double> &vec);
void vector_printer(vector<string> &vec);
void vector_printer(vector<int> &vec);