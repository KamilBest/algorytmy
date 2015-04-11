//============================================================================
// Name        : sortowanie_przez_wybor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void posortuj(int tab[], int ilosc_liczb) {
	  int min;
	  for(int j = 0; j < ilosc_liczb - 1; j++)
	    {
	      min = j;
	      for(int i = j + 1; i < ilosc_liczb; i++)
	        if(tab[i] < tab[min])
	        	min = i;
	      swap(tab[min], tab[j]);
	    }


	for (int i = 0; i < ilosc_liczb; i++)
		cout << tab[i] << " ";
}

int main() {
	int liczby[5] = { 321, 123, 5, 134, 87 };
	posortuj(liczby, 5);
	return 0;
}
