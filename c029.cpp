// c029.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
class CRectangle
{
public:
    int width;
    int height;
    CRectangle(int w=10, int h=10)
    {
        width = w;
        height = h;
    }
};
int main()
{
    CRectangle win;
    cout << win.width<<" , " << win.height;
}

