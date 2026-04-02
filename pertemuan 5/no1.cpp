#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int a[5];

    system("cls");
    cout << "INPUT :";
        for(int i = 0; i < 5; i++) {
         cin >> a[i];
    }
     cout << "OUTPUT : ";
        for(int i = 4; i >= 0; i--) {
            cout << a[i] << " ";
    }
    return 0;
}