#include <iostream>

using namespace std;

int swapp(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	return 0;
}

int main()
{
	int a = 10;
	int b = 5;

	cout << "a = " << a << ", b = " << b << endl;

	swapp(a, b);


	cout << "a = " << a << ", b = " << b << endl;

}
