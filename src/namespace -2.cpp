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

using namespace first;

int main(void) {
    cout << "Kinesys의 출신지는 " << endl;
    first::area();
    cout << "Kinesys의 출생년도는 " << first::year << endl;

    return 0;
}
