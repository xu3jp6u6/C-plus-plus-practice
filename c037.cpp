// c037.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <iostream>
using namespace std;
class CWin
{
private:
    char id;
    int width, height;

public:
    int area()
    {
        return width * height;
    }

    void show_area(void)
    {
        cout << "window " << id << ", area=" << area() << endl;
    }
    CWin(char i, int w, int h):id(i),width(w),height(h)
    {}
    friend void set_data(CWin& ,char, int, int);
    friend void set_data(CWin& ,char);
    friend void set_data(CWin& ,int, int);

};
void set_data(CWin &win,char i, int w, int h)
{
    win.id = i;
    win.width = w;
    win.height = h;
}
void set_data(CWin &win,char i)
{
    win.id=i;
}
void set_data(CWin &win,int w, int h)
{
    win.width = w;
    win.height = h;
}

int main(void)
{
    CWin win1('Z', 10, 50);
    CWin win2('Z', 10, 50);;
    set_data(win1, 'A', 50, 40);
    set_data(win2, 'B');
    set_data(win2, 80, 120);
    win1.show_area();
    win2.show_area();
}


