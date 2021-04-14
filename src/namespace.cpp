#include <iostream>
using namespace std;

namespace first 
{
    int year = 2002;

    void Area()
    {
        cout << "전라도" << endl;
    }
}

namespace second
{
    int year = 2002;

    void Area()
    {
        cout << "경기도" << endl;
    }
}

using namespace first;
using namespace second;

int main(void) {
    cout << "Kinesys님의 출신지는";
    first::Area();
    cout << "Kinesys님의 출생년도는" << first::year << endl;
    cout << "Lune님의 출신지는";
    second::Area();
    cout << "Lune님의 출생년도는" << second::year << endl;

    return 0;
}
