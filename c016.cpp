﻿// c016.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
double inch(int *);
int main()
{
    int x;
    cout << "輸入cm :";
    cin >> x;
    cout << inch(&x) << " inch";
}
double inch(int *p1)
{
    return *p1 * 0.394;
}
//傳遞指標到函數中
