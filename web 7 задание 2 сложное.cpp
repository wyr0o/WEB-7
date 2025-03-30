#include <iostream>

using namespace std;


int main()
{
	int a = 131412;
	int b = 4434213;

	cout << "a = " << a << ", b = " << b << endl;

	a = a + b;
	b = a - b;
	a = a - b;


	cout << "a = " << a << ", b = " << b << endl;

}