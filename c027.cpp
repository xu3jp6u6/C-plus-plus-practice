// c027.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
class CWin
{   
	char id;
	int width;
	int height;
public:
	void set_data(char i, int w, int h)
	{
		id = i;
		width = w;
		height = h;
	}
	friend int area(CWin);
	friend void show_area(CWin);
	//友誼函數讓函數可以存取私有成員
};
int area(CWin w)
{
	return w.width * w.height;
}
void show_area(CWin win)
{
	cout << "window " << win.id << ",  area=" << area(win) << endl;
}
int main()
{
	CWin win1;
	win1.set_data('B', 50,40);
	show_area(win1);//顯示id和面積
}
