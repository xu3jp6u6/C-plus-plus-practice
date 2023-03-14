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
	//先加入後使用Selection sort法進行排序
	cout << "score = " ;
	for (j = 0; j < 10;j++)
	{
		cout << score[j] << "  ";
	}
	
	
}
