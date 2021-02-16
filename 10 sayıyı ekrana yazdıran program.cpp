#include <iostream>
using namespace std;
int main()
{
	int Sayı[10], d, s;
	for (d = 0; d <= 9; d++) {
		cout << d + 1 << ".sayi = ";
		cin >> s;
		Sayı[d] = s;
	}
	for (d = 0; d <= 9; d++) {
		cout << Sayı[d];
	}
}