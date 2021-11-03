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
	int b, i, j;


	cout << "Nhap so lan n: ";
	cin >> x;
	cin.ignore(1000, '\n');

	for (int i = 0; i < x; ++i) {
		cout << "Nhap so thu[ " << i << "] ";
		cin >> n;
		cin >> array[i];
		for (int i = 0; i < x - 1; ++i) {
			for (int j = i + 1; j < x; j++) {
				if (array[i] > array[j]) {
					b = array[i];
					array[i] = array[j];
					array[j] = b;
				}
			}
		}
		for (int i = 0; i < x; ++i) {
			cout << array[i] << " ";

		}
		array[i] = Giaithua(n);
	}

	for (int i = 0; i < x; ++i) {
		kq = kq + array[i];
	}
	cout << "Tong giai thua: " << kq << '\n';
	
	for (int i = 0; i < x; ++i) {
		cout << "Nhap so thu[ " << i << "] ";
	}
	
	return 0;
}


/*6a.Nhập array gồm n số nguyên
 tính tổng của các giai thừa
 array
 vòng lặp for
 factorial (n) tính ra kết quả giai thừa sau đó kết hợp với array sau đó vòng lặp for
6b.Xắp xếp các số nguyên theo thứ tự tăng dần*/