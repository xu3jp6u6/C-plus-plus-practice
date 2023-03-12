
#include <iostream>
using namespace std;
class caaa 
{
public:
	int a;
	int b;
	int c;
};
int main()
{
	caaa obj;
	obj.a = 1;
	obj.b = 3;
	obj.c = obj.a + obj.b;
	cout << "a = " << obj.a << ",b = " << obj.b << ",c = " << obj.c;
}

