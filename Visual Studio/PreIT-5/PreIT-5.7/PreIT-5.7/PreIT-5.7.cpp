// PreIT-5.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	double toan, van, anh;

	printf("Nhap diem toan: \n");
	scanf_s("%lf", &toan);

	printf("Nhap diem van: \n");
	scanf_s("%lf", &van);

	printf("Nhap diem anh: \n");
	scanf_s("%lf", &anh);

	double dtb = (toan + van + anh) / 3;

	if (dtb < 3.5) {
		printf("Diem loai F.\n");
	}
	else if (3.5 <= dtb && dtb <= 4.99) {
		printf("Diem loai D.\n");
	}
	else if (5 <= dtb && dtb <= 6.49) {
		printf("Diem loai C.\n");
	}
	else if (6.5 <= dtb && dtb <= 8.49) {
		printf("Diem loai B.\n");
	}
	else if (dtb >= 8.5) {
		printf("Diem loai A.\n");
	}

	printf("%lf", dtb);
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
