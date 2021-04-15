#include <iostream>
using namespace std;

void first(const int x, const int y)
{
    cout << "x + y =" << x + y << endl;
}

void second(const int x, const int y)
{
    cout << "x - y = " << x - y << endl;
}

int main(void) {
    first(5, 15); //int x에 5 int y에 15를 저장함.
    second(10, 20); //int x에 10, int y에 20를 저장함.

    return 0;
}
