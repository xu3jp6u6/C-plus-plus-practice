// c024.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
class calculator
{   public:
    int a;
    int b;
    void add()
    {
        cout << a + b<<" ";
    }
    void sub()
    {
        cout << a - b << " ";
    }
    void mul()
    {
        cout << a * b << " ";
    }
    void div()
    {
        cout << a / b;
    }
 //設定包含加減乘除成員函數的類別
};
int main()
{
    calculator i;
    i.a = 42;
    i.b = 6;
    i.add();
    i.sub();
    i.mul();
    i.div();
}

