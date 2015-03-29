//============================================================================
// Name        : algorytm_euklidesa.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int liczba1=1989, liczba2=867;
	do{
		if(liczba1>liczba2)
			liczba1-=liczba2;
		else
			liczba2-=liczba1;
	}while(liczba1!=liczba2);
	cout<<"NWW: "<<liczba1<<endl;
	return 0;
}
