#include <iostream>
using namespace std;
int main()
{
	int A[10], B[10], s, i;
	for (i = 0; i <= 9; i++) {
		cout << i + 1 << ".sayi = ";
		cin >> s;
		A[i] = s;
	}
	for (i = 0; i <= 9; i++) {
		B[i] = A[9 - i];
		cout << B[i];
	}
}