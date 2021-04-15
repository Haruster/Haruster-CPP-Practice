#include <iostream>
using namespace std;

int main(void) {
    int data1 = 100;
    int data2 = 200;

    int one = 0;
    int two = 0;

    for(int i = 0; i < 10;  i++) {
        one = data1 + data2;
        two = data1 - data2;
    }

    cout << "data1의 값은 " << one << "data2의 값은" << two << "입니다." << endl;

    return 0;
}
