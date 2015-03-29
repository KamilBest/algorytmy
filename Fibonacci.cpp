#include <iostream>
using namespace std;

int fibonacci(int n)
{
	if(n<3)
		return 1;
	else
		return fibonacci(n-2)+fibonacci(n-1);
}

int main() {
	int liczba;
	cout<<"Podaj, ktory element ciagu chcesz obliczyc: "<<endl;
	cin>>liczba;
	int tab_fib[liczba];
	tab_fib[0]=1;
	tab_fib[1]=1;
	for(int i=2;i<liczba;i++)
	{
		tab_fib[i]=tab_fib[i-2]+tab_fib[i-1];
	}
	cout<<tab_fib[liczba-1]<<endl;
	cout<<fibonacci(liczba);
	return 0;
}
