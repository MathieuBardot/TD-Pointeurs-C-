#ifndef POINTEURS_H
#define POINTEURS_H
#include <vector>
using namespace std;

void showAddress(int x);
void showValue(int &x);

void swap(int* ptr1, int* ptr2);
void TabMinMax(vector<int> Tab, int Tabsize, int* ptrmin, int* ptrmax);
void TabPointeurs(int* ptrTab);

#endif // !POINTEURS_H