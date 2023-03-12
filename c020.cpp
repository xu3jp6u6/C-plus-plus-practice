

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
    char str[100];
    char *ptr = str;
    cin >> str;

    // 將字串轉換為大寫
    while (*ptr != '\0')
    {
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            *ptr -= 32;
        }
        ptr++;
    }

    cout << "大寫形式：" << str << endl;
}
