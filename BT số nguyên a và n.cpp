// BT số nguyên a và n.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a;
	int n;
	cout << " Enter 2 integer: ";
	cin >> a;
	cin >> n;
	int z = 1;
	int b = 1;
	for (int i = 1; i <= a; ++i) {
		z *= i;
	}
	for (int i = 1; i <= n; ++i) {
		b *= i;
	}
	cout << " a! + n! =: " << b + z << endl;
	return 0;
}

//6. Nhập vào 2 sô nguyên a và n. tính và in ra (a! + n!)