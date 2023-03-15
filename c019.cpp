// c019.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
void display(char*, int,int);
int main()
{
	char y[] ="dsfsdf efew fewf";
	int n = sizeof(y);
	char* ptr = y;
	display(ptr, 8,n);

}
void display(char* a, int b,int c)
{   
	for (int i = b; i <= c-1; i++)
		cout << a[i] ;
	//顯示從指定個數到結束的字串
}
