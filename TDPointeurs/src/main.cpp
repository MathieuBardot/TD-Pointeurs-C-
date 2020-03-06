#include <iostream>
#include <vector>
#include "pointeurs.h"

using namespace std;

int main() {
	// Test fonction swap
	int a = 5;
	int* ptr1 = &a;
	int b = 8;
	int* ptr2 = &b;

	swap (ptr1,ptr2);

	// Test fonction chercher la valeur min et max d'un tableau
	int size = 10;
	int min{0}, max{0};
	int *ptrmin=&min;
	int *ptrmax=&max;
	vector<int> Tab(size);
	for (int i=0; i<size; i++){
		Tab[i]=i+1;
		cout << Tab[i];
	}
	cout << "\n" ;

	TabMinMax(Tab,size,ptrmin,ptrmax);

	// Test de la fonction
	int const arraySize {5} ;
	int Tab1[arraySize];
	int* ptrTab = Tab1;

	TabPointeurs(ptrTab);
}