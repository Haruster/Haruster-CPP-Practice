#include <iostream>

using namespace std;

int main(void) {
    int two = 2;
    int four = 8;

    int sum1 = 2;
    int sum2 = 2;

    sum1 = sum1 + two;
    sum2 += four; //sum2 = sum2 + four를 축약

    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;

    sum1 = 2;
    sum2 = 8;

    sum1 *= two; //sum1 = sum1 * two를 축약
    sum2 /= four; //sum2 = sum2 / four를 축약

    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;

    return 0;
}
