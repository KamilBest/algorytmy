//============================================================================
// Name        : algorytm_euklidesa.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int euklides(int n1,int n2)
{
	if(n1==n2)
		return n1;
	if(n1>n2)
		return euklides(n1,n1-n2);
	else
		return euklides(n2,n2-n1);
}

int main() {
	int liczba1=1989, liczba2=867;
	do{
		if(liczba1>liczba2)
			liczba1-=liczba2;
		else
			liczba2-=liczba1;
	}while(liczba1!=liczba2);
	cout<<"NWW: "<<liczba1<<endl;
	cout<<"NWW rekurencyjnie: "<<euklides(liczba1,liczba2)<<endl;
	return 0;
}
