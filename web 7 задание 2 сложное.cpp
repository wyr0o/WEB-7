#include <iostream>

using namespace std;

void swapp(int& a, int& b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

int main()
{
	int a = 131412;
	int b = 4434213;

	cout << "a = " << a << ", b = " << b << endl;

	swapp(a, b);

	cout << "a = " << a << ", b = " << b << endl;

}