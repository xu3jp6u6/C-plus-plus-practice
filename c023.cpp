

#include <iostream>
using namespace std;
class CBox
{
public:
    int length;
    int width;
    int height;
    int volume()
    {
        return length*width*height;
    }
    int surfaceArea()
    {
        return 2 * (length * width + length * height + width * height);
    }
    //設定成員函數
};
int main()
{
    CBox a;
    a.length = 10;
    a.width = 40;
    a.height = 5;
    cout << a.volume() << endl;
    cout << a.surfaceArea() << endl;
}

