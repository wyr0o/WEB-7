#include <iostream>

using namespace std;

int swapp(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	return 0;
}

int main()
{
	int a = 131412;
	int b = 4434213;

	cout << "a = " << a << ", b = " << b << endl;

	swap(a, b);

	cout << "a = " << a << ", b = " << b << endl;

}