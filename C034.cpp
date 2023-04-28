// C034.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
class CWin
{
private:
    char id;
    int width, height;
    static int num;
public:
    CWin(char i, int w, int h) :id(i), width(w), height(h)
    {
        num++;
    }
    CWin()
    {
        num++;
    }
    friend void count(void);
};
int CWin::num = 0;
 void count(void)
{
    cout << "已建立" << CWin::num << "個物件..." << endl;
}
int main()
{
    count();
    CWin win1('A', 50, 60);
    CWin win2('B', 60, 80);
    count();
    CWin my_win[5];
    count();
}

