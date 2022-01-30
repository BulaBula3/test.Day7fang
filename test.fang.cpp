#include <iostream>
using namespace std;

int main1()
{
    cout << "请选择副本难度" << endl;
    cout << "1、普通" << endl;
    cout << "2、中等" << endl;
    cout << "3、困难" << endl;

    system("pause");

    int select = 0;
    cin >> select;

    switch (select)
    {
    case 1:
            cout << "您选择的是普通难度" << endl;
    case 2 :
                cout<< "您选择的是中等难度" << endl;
    case 3:
                cout << "您选择的是困难难度" << endl;
            default:
                break; 
    }

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 5) 
            {
                break;
            }
            cout << "* ";
        }
        cout << endl;
    }


    return 0;
}