#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int min,max;
	int liczba_elementow=10;
	int liczby[liczba_elementow];
	for(int i=0;i<liczba_elementow;i++)
		liczby[i]=rand()%1000+1;
	min=liczby[0];
	max=liczby[0];
	for(int i=1;i<liczba_elementow;i++)
	{
		if(i==liczba_elementow){
			cout<<"min: "<<min<<endl;
			cout<<"max: "<<max<<endl;
		}
		if(liczby[i]<min)
			min=liczby[i];
		if(liczby[i]>max)
			max=liczby[i];
	}
	for(int i=0;i<liczba_elementow;i++)
		cout<<liczby[i]<<" ";
	cout<<endl<<"min: "<<min<<endl;
	cout<<endl<<"max: "<<max<<endl;
	return 0;
}
