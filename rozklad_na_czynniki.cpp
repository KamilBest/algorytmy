#include <iostream>
#include <math.h>
using namespace std;

int main() {

	int liczba;
	cout<<"Podaj liczbe: "<<endl;
	cin>>liczba;
	int pierw_z_liczby=sqrt(liczba);
	cout<<"Czynniki liczby "<<liczba <<":"<<endl;
	for(int i=2;i<=pierw_z_liczby;i++){
		while(liczba%i==0){
			cout<<i<<" "<<endl;
			liczba/=i;
		}
	}
	if(liczba>1)
		cout<<liczba;

	return 0;
}