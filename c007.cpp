// c007.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int main()
{   
    int a = 5, b = 3;
    cout << "num = " << (a++) + b << " ,a = " << a << " ,b = " << b << endl;
    a= 5, b = 3;
    cout << "num = " << (++a) + b << " ,a = " << a << " ,b = " << b << endl;
    a = 5, b = 3;
    cout << "num = " << (a++) + (b++) << " ,a = " << a << " ,b = " << b << endl;
    a = 5, b = 3;
    cout << "num = " << (++a) + (++b) << " ,a = " << a << " ,b = " << b << endl;
    a = 5, b = 3;
    a += a + (b++);
    cout << "a = " << a << " ,b = " << b << endl;
    //兩個加號在數字前後的差異
}

