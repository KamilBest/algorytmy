
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int liczba,suma=0;
	cout<<"Podaj liczbe: "<<endl;
	cin>>liczba;
	for(int i=1;i<liczba;i++)
	{
		if(liczba%i==0){
			suma+=i;
		}
	}
	if(suma==liczba)
		cout<<"Liczba jest doskonala."<<endl;
	else
		cout<<"Liczba NIE JEST doskonala. "<<endl;

	return 0;
}