#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    system("cls");
    int a;

    cout << "INPUT ANGKA : ";
    cin >> a;
     cout << "OUTPUT : " << endl;
    for (int i = 0; i < a; i++) {
        int angka = 1;
        for (int j = 0; j <= i; j++) {
            cout << angka << " ";
            angka = angka * (i - j) / (j + 1);
        }
     cout << endl;
    }
    return 0;
}