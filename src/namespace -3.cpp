#include <iostream>
using namespace std;

namespace first()
{
    int data = 100;

    void Mydate()
    {
        cout << "Lune Kinesys" << endl;
    }
}

using namespace first;

int main(void) {
    cout << "data는" << first::data << endl;
    first::Mydata();

    return 0;
}
