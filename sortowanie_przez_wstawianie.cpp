//============================================================================
// Name        : sortowanie_przez_wstawianie.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void posortuj(int tab[], int ilosc_elementow) {
	int temp, i;
	for (int j = ilosc_elementow - 1; j >= 0; j--) {
		temp = tab[j];
		i = j + 1;
		while ((i <= ilosc_elementow) && (temp > tab[i])) {
			tab[i - 1] = tab[i];
			i++;
		}
		tab[i - 1] = temp;

	}
	for (int i = 0; i < ilosc_elementow; i++)
		cout << tab[i] << " ";
}

int main() {
	int liczby[5] = { 342, 476, 1, 435, 8 };
	posortuj(liczby, 5);
	return 0;
}
