#include <iostream>
using namespace std;

int main() {
    int i = 0;
    // laboratorium ilmu komputer


    // goto a;
    // b: 
    // cout << "ilmu";
    // goto c;

    // a : 
    // cout << "laboratorium";
    // goto b;

    // c:
    // cout << "komputer";

    int a = 1;

    x:
    cout << a << "";
    a++;

    if ( a<=10 ) {
        goto x;
    }

    return 0;
}