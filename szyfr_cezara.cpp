#include <iostream>
using namespace std;

int main() {
	string tekst = "abcxyzABCXYZ";
	int przesuniecie = 3;
	for (int i = 0; i < tekst.length(); i++) {
		if (tekst[i] >= 65 && tekst[i] <= 90 - przesuniecie)
			tekst[i] = int(tekst[i]) + przesuniecie; //wielkie liter
		else if (tekst[i] >= 91 - przesuniecie && tekst[i] <= 90)
			tekst[i] = int(tekst[i]) - 26 + przesuniecie; // wielkie litery
		else if (tekst[i] >= 97 && tekst[i] <= 122 - przesuniecie)
			tekst[i] = int(tekst[i]) + przesuniecie; //małe liter
		else if (tekst[i] >= 123 - przesuniecie && tekst[i] <= 122)
			tekst[i] = int(tekst[i]) - 26 + przesuniecie; //małe litery
	}
	cout << tekst << endl;

	return 0;
}
