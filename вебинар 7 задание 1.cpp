#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	int int1 = 1;
	short short1 = 1;
	long long1 = 1;
	long long longlong1 = 1;
	float float1 = 1;
	double double1 = 1;
	long double longdouble1 = 1;
	bool bool1 = TRUE;

	cout << "int: "<<&int1<< " "<< sizeof(int1)<< endl;
	cout << "short: " << &short1 << " " << sizeof(short1)<< endl;
	cout << "long: " << &long1 << " " << sizeof(long1)<< endl;
	cout << "long long: " << &longlong1 << " " << sizeof(longlong1)<< endl;
	cout << "float: " << &float1 << " " << sizeof(float1)<< endl;
	cout << "double: " << &double1 << " " << sizeof(double1)<< endl;
	cout << "long double: " << &longdouble1 << " " << sizeof(longdouble1)<< endl;
	cout << "bool: " << &bool1 << " " << sizeof(bool1)<< endl;
}