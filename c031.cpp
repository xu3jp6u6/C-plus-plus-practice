// c031.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
class CWin
{
private:
	char id;
	int width, height;

public:
	CWin(char i, int w, int h) :id(i), width(w), height(h)
	{}
	
	friend int area(CWin);
	friend CWin compare(CWin, CWin);
	friend char get_id(CWin);
	
};
CWin compare(CWin win1, CWin win2)
{
	if (area(win1) > area(win2))
		return win1;
	else
		return win2;
}
int area(CWin a)
{
	return a.width * a.height;
}
char get_id(CWin b)
{
	return b.id;
}
int main()
{
	CWin win1('A', 70, 80);
	CWin win2('B', 60, 90);
	cout << "window " << get_id(compare(win1, win2));
	cout << " is larger" << endl;
}

