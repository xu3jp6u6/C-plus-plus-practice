// c002.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main(void)
{
    char beep = '\a';
    int i = beep;
    cout << "beep=" << beep;
    cout << i << endl;
    return 0;
}
