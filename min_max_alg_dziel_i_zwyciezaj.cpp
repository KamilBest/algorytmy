#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
srand(time(NULL));
	int liczba_elementow=11;
	int liczby[liczba_elementow];
	for(int i=0;i<liczba_elementow;i++)
	{
		liczby[i]=rand()%1000+1;
	}
	if(liczba_elementow%2==1)
		liczby[liczba_elementow]=liczby[liczba_elementow-1];
	int min=1000, max=-1;
	for(int i=0;i<liczba_elementow;i+=2)
	{
		if(liczby[i] > liczby[i+1])
		    {
		      if(liczby[i]   > max) max = liczby[i];
		      if(liczby[i+1] < min) min = liczby[i+1];
		    }
		    else
		    {
		      if(liczby[i]   < min) min = liczby[i];
		      if(liczby[i+1] > max) max = liczby[i+1];
		    }
	}
	for(int i=0;i<liczba_elementow;i++)
		cout<<liczby[i]<<" ";
	cout<<endl<<"min: "<<min<<endl;
	cout<<"max: "<<max<<endl;

	return 0;
}
