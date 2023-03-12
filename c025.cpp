// c025.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
class CRect
{
    int width;
    int height;
    double weight;
public:
    void set(double wg)
    {
        weight=wg;
   }
    void set(int w, int h)
    {
        width=w;
        height=h;
    }
    void set(double wg, int w, int h)
    {
        weight=wg;
        width=w;
        height=h;
    }
    void show()
    {
        cout << width << "," << height << "," << weight<<endl;
    }
};
int main()
{
    CRect win1, win2;
    win1.set(50.45);
    win1.set(4,10);
    win2.set(60, 5, 12);
    win1.show();
    win2.show();
}


