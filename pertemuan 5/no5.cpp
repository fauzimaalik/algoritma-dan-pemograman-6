#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int a, b, sisa;

    system("cls");
    cout << "inputkan dua bilangan : ";
    cin >> a >> b;

    while (b != 0) {
        sisa = a % b;
        a = b;
        b = sisa;
    }

    cout << "hasil = " << a << endl;

    return 0;
}