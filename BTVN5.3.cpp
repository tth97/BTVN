// BTVN 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << " Enter the number which is grate than 9: ";
	cin >> a; 
    if (a < 10) {
        cout << " Error ";
    }
    else if (a > 99) {
        cout << " Error ";
    }
    else if (a>=10) {
        switch (a /10) {
        case 1: cout << " Muoi "; break;
        case 2: cout << " Hai muoi "; break;
        case 3: cout << " Ba muoi "; break;
        case 4: cout << " Bon muoi "; break;
        case 5: cout << " Nam muoi "; break;
        case 6: cout << " Sau muoi "; break;
        case 7: cout << " Bay muoi "; break;
        case 8: cout << " Tam muoi "; break;
        case 9: cout << " Chin muoi "; break;
        }
        switch (a % 10) {
        case 1: cout << " mot "; break;
        case 2: cout << " hai "; break;
        case 3: cout << " ba "; break;
        case 4: cout << " bon "; break;
        case 5: cout << " lam "; break;
        case 6: cout << " sau "; break;
        case 7: cout << " bay "; break;
        case 8: cout << " tam "; break;
        case 9: cout << " chin "; break;
        }

    }

    return 0;
}

// 3 viết phương trình nhập vào 1 số có 2 chữ số, sau đó in ra cách đọc bảng tiếng việt 
// VD 12 -> muoi hai
//    56-> năm muoi sau
//    97 -> chin muoi bay
