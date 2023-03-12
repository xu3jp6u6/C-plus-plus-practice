// c011.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{
    int num[5];
    int i = 0;
    double sum=0;
    do
    {
        if (i == 5)
        {
            break;
        }
        cout << "input num :";
        cin >> num[i];
    } while (num[i++] > 0);
    for (i = 0; i < 5; i++)
        sum += num[i];
    cout << "average =" << sum / 5;
}


