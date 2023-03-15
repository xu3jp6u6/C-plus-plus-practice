#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[20];
    char* ptr = str; // 宣告一個指向字元陣列的指標
    cin.getline(str, 20);

    // 將字串空白轉換為*號
    while (*ptr != '\0')
    {
        if (*ptr==' ')
        {
            *ptr ='*';
        }
        ptr++;
    }

    cout << "替換後的字串為：" << str << endl;

}
