// c015.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
void num(int*, int*, int*);
int main()
{
	int a = 11, b = 9 ,c = 10;
	num(&a, &b, &c);
	
}
void num(int *p1, int *p2, int *p3)
{
	if (*p1 > *p2 && *p1 > *p3)
		cout << *p1 << " ";
	if (*p2 > *p3)
		cout << *p2 <<" "<<*p3;
	else
		cout << *p3 << " " << *p2;
}
