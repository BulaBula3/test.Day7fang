#include <iostream>
using namespace std;

int main2()
{
    for (int i = 0; i <= 100; i++)
    {
        if ( i % 2==0)
        {
            continue;
        }
        cout << i << endl;
    }

    cout << "1、xxxx" << endl;
    cout << "2、xxxx" << endl;

    goto FLAG;
    cout << "3、xxxx" << endl;
    cout << "4、xxxx" << endl;

    FLAG:
    cout << "5、xxxx" << endl;






    system("pause");

    return 0;
}