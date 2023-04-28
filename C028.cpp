
#include <iostream>
using namespace std;
class CWin
{
private:
	char id;
	int width, height;
public:
	CWin(char, int, int);
	CWin(int, int);
	void  show_member(void)
	{
		cout << "window " << id << ":";
		cout << "width " << width << ", height= " << height << endl;
	}
};
CWin::CWin(char i, int w, int h)
{
	id = i;
	width = w;
	height = h;
	cout << "CWin(char, int, int)建構元被呼叫了..." << endl;
}
CWin::CWin(int w, int h)
{
	id = 'z';
	width = w;
	height = h;
	cout << "CWin(int, int)建構元被呼叫了..." << endl;
}
int main()
{
	CWin win1('A', 50, 40);
	CWin win2(80, 120);

	win1.show_member();
	win2.show_member();
}

