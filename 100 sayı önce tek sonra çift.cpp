#include <iostream>
using namespace std;
int main()
{
	int s[100], i, x;
	for (i = 0; i <= 99; i++) {
		cout << i + 1 << ".sayi = ";
		cin >> x;
		s[i] = x;
	}
	cout << "Dizinin tek elemanlari";
	for (i = 0; i <= 99; i++) {
		if (s[i] % 2 == 0) {

		}
		else {
			cout <<"\n"<<s[i]<<"\n";
		}
	}
	cout << "Dizinin cift elemanlari";
	for (i = 0; i <= 99; i++) {
		if (s[i] % 2 == 0) {
			cout <<"\n"<<s[i]<<"\n";
		}
	}
}