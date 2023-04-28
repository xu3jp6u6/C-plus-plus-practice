#include <iostream>
using namespace std;
class CWin
{
private:
    char id;
    int width, height;
    static CWin win[3];

public:
    void set_member(char i, int w, int h)
    {
        id = i;
        width = w;
        height = h;
    }

    int area(void)
    {
        return width * height;
    }

    static void largest(CWin win[], int n)
    {
        int max = 0, iw = 0;
        for (int i = 0; i < n; i++)
        {
            if (win[i].area() > max)
            {
                max = win[i].area();
                iw = i;
            }
        }
        cout << "largest window= " << win[iw].id << endl;

    }
    static double averge(CWin w[])
    {
        return (w[0].area() + w[1].area() + w[2].area()) / 3.0f;
    }
};

CWin CWin::win[3];
int main(void)
{
    CWin win[3];
    win[0].set_member('A', 60, 70);
    win[1].set_member('B', 40, 60);
    win[2].set_member('C', 80, 50);
    CWin::largest(win, 3);
    cout <<"平均值 = " << CWin::averge(win);
}
