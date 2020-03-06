#include "pointeurs.h"
#include <iostream>
#include <vector>

using namespace std;

void showAddress(int x){
    cout << &x << "\n";
}
void showValue(int& x){
    cout << x << "\n";
}

void swap(int* ptr1, int* ptr2){
    int* c{0};
    // Avant échange
    cout << "Avant échange pointeurs premières valeurs :"<< *ptr1 <<"\n";
    cout << "Avant échange pointeurs seconde valeur :"<< *ptr2 <<"\n";
    c = ptr2 ;
    ptr2 = ptr1;
    ptr1 = c;
    // Après échange
    cout << "Après échange pointeurs premières valeurs :"<< *ptr1 <<"\n";
    cout << "Après échange pointeurs seconde valeur :"<< *ptr2 <<"\n";
}

void TabMinMax(vector<int> Tab, int Tabsize, int* ptrmin, int* ptrmax){
	*ptrmin = Tab[0];
	*ptrmax = Tab[0];
    for (int i=0; i<Tabsize; i++){
		if (Tab[i] > *ptrmax){
			*ptrmax = Tab[i];
		}
		if (Tab[i] < *ptrmin){
			*ptrmin = Tab[i];
		}
	}
	cout << "Valeur min :" << *ptrmin << "\n";
	cout << "Valeur max :" << *ptrmax  << "\n";
}

void TabPointeurs(int* ptrTab){
	for (int i=0; i<5; i++){
		cout << "Rentrer une valeur à ajouter aux tableaux : \n";
		cin >> *ptrTab;
		cout << "Tableau à la positon " << i << ", le pointeur donne : "<< *ptrTab;
		cout << "\n";
	}
}