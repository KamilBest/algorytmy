#include <iostream>
using namespace std;

int main() {
	float nominaly[]={200,100,50,20,10,5,2,1};
	float reszta;
	int liczba_monet;
	cout<<"Ile reszty jest do wydania? "<<endl;
	cin>> reszta;
	int i=0;
	while(reszta>0)
	{
		if(reszta>=nominaly[i]){
			liczba_monet=reszta/nominaly[i];
			reszta=reszta-nominaly[i]*liczba_monet;
			cout<<nominaly[i] <<" x "<<liczba_monet<<endl;
		}
		else
			i++;
	}
	return 0;
}
