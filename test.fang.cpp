#include <iostream>
using namespace std;

int main1()
{
    cout << "��ѡ�񸱱��Ѷ�" << endl;
    cout << "1����ͨ" << endl;
    cout << "2���е�" << endl;
    cout << "3������" << endl;

    system("pause");

    int select = 0;
    cin >> select;

    switch (select)
    {
    case 1:
            cout << "��ѡ�������ͨ�Ѷ�" << endl;
    case 2 :
                cout<< "��ѡ������е��Ѷ�" << endl;
    case 3:
                cout << "��ѡ����������Ѷ�" << endl;
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