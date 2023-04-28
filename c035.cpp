// c035.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
class CWin
{
public:
	char id;
	int width, height;
    CWin(char i, int w, int h):id(i),width(w),height(h)
	{}

	CWin *compare(CWin* win)
	{
		if (this->area() > win->area())
			return this;
		else
			return win;
	}

	int area(void)
	{
		return width * height;
	}

};
int main(void)
{
	CWin win1('A', 60, 70);
	CWin win2('B', 60, 90);
	CWin* ptr1 = &win1;
	CWin* ptr2 = &win2;
	CWin *largest= ptr1->compare(ptr2);
	cout << "window " << largest->id << " is larger" << endl;
	
}