//============================================================================
// Name        : sort_wstaw_wysz_bin.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int ilosc_elementow=10;
int liczby[]={2,153,123,346,213,56,12,56,324,12};
int main() {
	int koniec,poczatek,liczba,i;

	for(int j = ilosc_elementow - 2; j >= 0; j--)
	  {
	    liczba  = liczby[j];
	    poczatek = j;
	    koniec = ilosc_elementow;
	    while(koniec - poczatek > 1)
	    {
	      i = (poczatek + koniec) / 2;
	      if(liczba <= liczby[i]) koniec = i; else poczatek = i;
	    }
	    for(i = j; i < poczatek; i++) liczby[i] = liczby[i + 1];
	    liczby[poczatek] = liczba;
	  }
	for(i=0;i<ilosc_elementow;i++)
		cout<<liczby[i]<<" ";

	return 0;
}
