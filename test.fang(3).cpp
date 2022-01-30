#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;

    int arr2[5] = { 10,20, 30, 40,50 };

    //利用循环 输出数组中的元素
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << endl;
    }

    //定义数组的时候，必须有初始长度
    int arr3[] = { 90,80,70,60,50,40,30,20,10 };
    for(int i=0;i<9;i++)
    {
        cout << arr3[i] << endl;
    }


    system("pause");

    return 0;
}