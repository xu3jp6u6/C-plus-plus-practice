// c017.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int b;
	float x=0;
	for (int i = 0; i < 10; i++)
	{
		cout << "輸入 : ";
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "&a[" << i << "]=" << &a[i] << endl;
	}
	cout << "&b=" << &b << endl;
	cout << "&a=" << &a << endl;
}


