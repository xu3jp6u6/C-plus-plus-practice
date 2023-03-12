// c012.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return(sum(n - 1) + n);
}
int  main()
{
    cout << sum(9);
}

