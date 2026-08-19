// PreIT-5.9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int luong_cb = 650000;
	int luong;
	int tnct;

	printf("Nhap so nam da cong tac (thang):\n");
	scanf_s("%d", &tnct);

	//luong = heso * luong co ban

	if (tnct < 12) {
		luong = 1.92 * luong_cb;
	}
	else if (tnct >= 12 && tnct < 36) {
		luong = 2.34 * luong_cb;
	}
	else if (tnct >= 36 && tnct < 60) {
		luong = 3 * luong_cb;
	}
	else if (tnct >= 60) {
		luong = 4.5 * luong_cb;
	}

	printf("Luong cua ban la: %d VND \n", luong);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
