// c018.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
void square(int*);
int main()
{
    int a[3] = {2,5,7};
    int* ptr=a;
    for (int i = 0;i<3;i++)
    {    
        square(ptr+i);
    }
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] <<" ";
    }
    
}
void square(int* arr)
{
    *arr *= *arr;
}
