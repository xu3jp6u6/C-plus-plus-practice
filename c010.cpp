// c010.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

using namespace std;
int main()
{
	int score1[] = {31,28,31,30,32};
	int score2[] = {30,33,36,41,39};
	int score[10];
	int i,k,j,temp,n,m;
	n = 10;
	int max;
	for (i = 0; i < 5; i++)
	{
		score[i] = score1[i];
	}
	for (i = 0; i < 5; i++)
	{
		score[i+5] = score2[i];
	}
	for (n = 0; n < 9; n++)
	{
		max = n;
		for (m = n + 1; m <= 9; m++)
		{
			if (score[m] > score[max])
				max = m;
		}
		temp = score[max];
		score[max] = score[n];
		score[n] = temp;
	}
	cout << "score = " ;
	for (j = 0; j < 10;j++)
	{
		cout << score[j] << "  ";
	}
	cout << endl << max;
	
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
