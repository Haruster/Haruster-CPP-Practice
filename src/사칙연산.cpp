#include <iostream>

using namespace std;

int main(void) {
    int one = 1;
    int two = 2;
    int three = 3;
    int four = 4;

    int a = one + two;
    int b = four - two;
    int c = four * three;
    int d = four / two;
    int e = four % two;

    cout << "one + two =" << a << endl;
    cout << "\nfour + two =" << b << endl;
    cout << "\nfour * three =" << c << endl;
    cout << "\nfour + two =" << d << endl;
    cout << "\nfour + two =" << e << endl;
    
    return 0;
}
