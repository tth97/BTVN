// BT 6a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int Giaithua(int n) {
	int a = 1;
	for (int i = 1; i <= n; ++i) {
		a *= i;
	}
	return a;
}

int main() {
	int kq = 1;
	int array[1000];
	int x = 0; //so luong
	int n = 0; // giai thua

	cout << "Nhap so lan n: ";
	cin >> x; 
	cin.ignore(1000, '\n');

	for (int i = 0; i < x; ++i) {
		cout << "Nhap so thu " <<  i + 1  << ": ";
		cin >> n;
		array[i] = Giaithua(n);
	}

	for (int i = 0; i < x; ++i) {
		kq = kq + array[i];
	}
	cout << "Tong giai thua: " << kq << '\n';
	return 0;
}
// 6a.Nhập array gồm n số nguyên
// tính tổng của các giai thừa
// array
// vòng lặp for
// factorial (n) tính ra kết quả giai thừa sau đó kết hợp với array sau đó vòng lặp for