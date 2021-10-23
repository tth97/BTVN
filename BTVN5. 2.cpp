// BTVN 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a;
	int b;
	double test; // nghiệm
	cout << " Provide a: ";
	cin >> a;
	cout << " Provide b: ";
	cin >> b;

	if (a == 0) {
		if (b == 0) {
			cout << " Infinitely many soltion " << endl; // phương trình vô số nghiêm
		}
		else {
			cout << " Method inexperienced " << endl; // phương trình vô nghiêm
		}
	}
	else {
		test = (double)-b / a;
		cout << " The equation that has a solution is: " << test << endl; // phương trình có nghiệm
	}

	return 0;

	}

		
		
	


// 2. giai phương trình bậcc 1
// ax+b=0

