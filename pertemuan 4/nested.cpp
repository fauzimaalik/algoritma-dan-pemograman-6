#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a;
    cin >> b;

    for (int i = 1; i <= 7; i++) { //kolom
        //i = 3; 3 <=5; 3++
        for(int j=1; j<=i; j++) { //baris
            //j =4 ; 4 <= 5; 4++
            cout << "*";
        }
        cout << endl; 
    }

    //5 kolom dan 5 baris
    //5 kolom dan 1 baris

}