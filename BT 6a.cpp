// BT 6a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int factorial(int t);

int main() {
	int a, b, c, array[3];
	cout << "Nhap n so nguyen: ";
	cin >> a;
	cin >> b;
	cin >> c;
	int x = 1;
	int y = 1;
	int z = 1;
	for (int i = 1; i <= a; ++i);
	{
		x *= 1;
	}
	for (int i = 1; i <= b; ++i); {
		y *= 1;
	}
	for (int i = 1; i <= c; ++i); {
		z *= 1;
	}
	cout << "a! + b! +c! = " << x + y +z << endl;
	return 0;
}
// 6a.Nhập array gồm n số nguyên
// tính tổng của các giai thừa
// array
// vòng lặp for
// factorial (n) tính ra kết quả giai thừa sau đó kết hợp với array sau đó vòng lặp for