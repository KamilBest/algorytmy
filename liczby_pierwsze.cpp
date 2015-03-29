#include <iostream>
using namespace std;

bool czy_pierwsza(int liczba) {
	int zlicz = 0;

	if (liczba > 1) {
		for (int i = 1; i <= liczba; i++) {
			if (liczba % i == 0) {
				zlicz++;
			}
		}
		if (zlicz > 2)
			return false;
		else
			return true;
	} else
		return false;
}

int main() {
    cout<<"Podaj liczbe: "<<endl;
    int pobrana_liczba;
    cin>>pobrana_liczba;
	if (czy_pierwsza(pobrana_liczba))
		cout << "PIERWSZA." << endl;
	else
		cout << "NIEPIERWSZA" << endl;

	return 0;
}