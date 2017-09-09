#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

void reads();
void writes();
int sum(int a,int b);
double sum(double c, double d);
void sum(std::string g, std::string f);
int resta(int a,int b);
double resta(double c, double d);
template <typename T, typename T2>
T recur(T a, T2 b);
int AND(int op1, int op2);
int OR(int op1, int op2);
int XOR(int op1, int op2);
int NOT(int op1);

#endif // FUNCTIONS_H
