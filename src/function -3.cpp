#include <iostream>
using namespace std;

void first(const int x, const int y, const int z, const int zx) //사칙연산 출력 function
{
    cout << "x + y = " << x + y << endl;
    cout <<  "x - y = " << x - y << endl;
    cout << " x * y =" << x * y << endl;
    cout << "x / y =" << x / y << endl;
}

void secong(const int x, const int y, const int z, const int zx)
{
    cout << "second x + y = " << x + y << endl;
    cout << "second x - y = " << x - y << endl;
    cout << "second x * y = " << x * y << endl;
    cout << "second x / y = " << x / y << endl;
}

int main(void) {
    
    first(10, 20); //x에 10, y에 20 저장
    second(5, 10); //x에 5, y에 10 저장

    return 0;

}
