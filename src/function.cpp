#include <iostream>
using namespace std;

void minus(const int x, const int y)
{
    cout << " x - y " << x - y << endl;
}

void plus(const int x, const int y)
{
    return x + y;
}

int main(void) {
    minus(10, 5);
    cout << " x + y " << << plus(2, 6) << endl;

    return 0;
}
