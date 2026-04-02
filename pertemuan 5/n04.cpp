#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    system("cls");
    int a;
    char z = 'A';

    cout<<"INPUT : ";
    cin>>a;
    cout<<"OUTPUT : "<< endl;
    for(int i = 1; i <= a; i++) {
        for(int j = 1; j <= i; j++) {
            cout << z;
        }
        cout << endl;
        z++;
    }

    return 0;
}