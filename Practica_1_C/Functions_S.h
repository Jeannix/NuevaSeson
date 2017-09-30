#ifndef FUNCTIONS_S_H
#define FUNCTIONS_S_H

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

void leer();
void escribir();
int sum(int a,int b);
double sum(double c, double d);
void sum(string g, string f);
int resta(int a,int b);
double resta(double c, double d);
void print(int a[][4]);
void sumdemat(int a[][2],int b[][2]);
void restdemat( int a[][2],int b[][2]);
void multdemat(int a[][2],int b[][2]);
void potenciademat(int a[][4],int potenci);
template <typename T, typename T2>
T recur(T a, T2 b);
int AND(int op1, int op2);
int OR(int op1, int op2);
int XOR(int op1, int op2);
int NOT(int op1);

#endif // FUNCTIONS_S_H
