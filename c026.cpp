#include <iostream>
#include <cstring> 
using namespace std;
class CWin
{
public:
    char id;
    int width;
    int height;
    char title[20];

    int area()
    {
        return width * height;
    }
    void set_title()
    {
        strcpy_s(title, "windows title");
    }
    void display()
    {
        cout << title;
    }

};
int main()
{
    CWin win1;
    win1.id = 'A';
    win1.width = 50;
    win1.height = 40;
    win1.set_title();
    cout << "Window " << win1.id << ":" << endl;
    cout << "Area = " << win1.area() << endl;
    win1.display();

}

