#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    char* ptr = str; // 宣告一個指向字元陣列的指標
    cin.getline(str, 100);

    // 將字符串轉換為大寫
    while (*ptr != '\0')
    {
        if (*ptr==' ')
        {
            *ptr ='*';
        }
        ptr++;
    }

    cout << "替換后的字符串為：" << str << endl;

}