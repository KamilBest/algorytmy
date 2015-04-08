#include <iostream>
using namespace std;

void posortuj(int tab[], int rozmiar) {
	cout << "Przed posortowaniem." << endl;
	for (int i = 0; i < rozmiar; i++)
		cout << tab[i] << " ";
	cout << endl;
	for (int i = 0; i < rozmiar; i++) {
		for (int j = i + 1; j < rozmiar; j++) {
			if (tab[i] > tab[j])
				swap(tab[i], tab[j]);
		}
	}
	cout << "Po posortowaniu." << endl;
	for (int i = 0; i < rozmiar; i++)
		cout << tab[i] << " ";
}

int main() {

	int liczby[11] = { 3, 45, 124, 34, 12, 45, 7, 21, 1, 85, 3 };
	int rozmiar = sizeof(liczby) / 4;
	posortuj(liczby, rozmiar);
	return 0;
}
