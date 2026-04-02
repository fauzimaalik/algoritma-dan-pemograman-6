#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
   int a, kuadrat, jumlah = 0;
     system("cls");
    cout << "INPUT ANGKA : "; 
    cin >> a;

    kuadrat = a * a;
    cout << "kuadrat dari " << a << " adalah " << kuadrat << endl;
    while(kuadrat > 0) {
        jumlah += kuadrat % 10;
        kuadrat /= 10;
    }
    if (jumlah == a){
        cout << "OUTPUT : ANGKA NEON" << endl;
    } else {
        cout << "OUTPUT : BUKAN ANGKA NEON" << endl;
    }
    return 0;
}