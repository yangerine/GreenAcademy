// PreIT-5.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	double diem_thi;

	printf("Nhap diem thi: \n");
	scanf_s("%lf", &diem_thi);

	int diem_thi_moi = (int)diem_thi;
	double so_du = diem_thi - diem_thi_moi;
	double diem_thi_tron;

	if (so_du <= 0.25) {
		diem_thi_tron = floor(diem_thi);
	}
	else if (so_du > 0.25 && so_du <= 0.5) {
		diem_thi_tron = diem_thi_moi + 0.5;
	}
	else if (so_du > 0.5) {
		diem_thi_tron = ceil(diem_thi);
	}

	printf("Diem thi duoc lam tron thanh: %.1lf \n", diem_thi_tron);
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
