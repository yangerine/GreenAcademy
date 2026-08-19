// PreIT-5.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	double km;
	int tam_tinh;
	int giam_gia;
	int tong_tien;

	printf("Nhap so km da di duoc: \n");
	scanf_s("%lf", &km);

	// km < 1: 15.000
	// 2 < km < 5: 13.500
	// 6 < km < 20: 11.000
	// km > 20: giam 10% tong so tien

	if (km < 2) {
		tam_tinh = km * 15000;
		tong_tien = tam_tinh;
	}
	else if (km >= 2 && km < 6) {
		tam_tinh = km * 13500;
		tong_tien = tam_tinh;
	}
	else if (km >= 6 && km < 20) {
		tam_tinh = km * 11000;
		tong_tien = tam_tinh;
	}
	else if(km >= 20) {
		tam_tinh = km * 11000;
		giam_gia = tam_tinh * 0.1;
		tong_tien = tam_tinh - giam_gia;
	}

	printf("Tong so tien xe la: %d VND\n ", tong_tien);

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
