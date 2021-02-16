#include <iostream>
using namespace std;
int main()
{
    int n, s, i;
    cout << "kaç elemanlı = ";
    cin >> n;
    int a[n], b[n], c[n];
    for (i = 0; i <= n - 1; i++) {
        cout << n - 1 + 1 << ".elemanı giriniz = ";
        cin >> s;
        a[i] = s;
    }
    for (i = 0; i <= n - 1; i++) {
        cout << n - 1 + 1 << ".elemanı giriniz = ";
        cin >> s;
        b[i] = s;
    }
    for (i = 0; i <= n - 1; i++) {
        c[i] = a[i] + b[i];
        cout << c[i];
    }
}