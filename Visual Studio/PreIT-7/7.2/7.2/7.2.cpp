// 7.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	long double can_nang[] = { 36.5, 98, 27.8, 63, 78.1, 48.3, 69, 72, 41.5, 32,
								  29.5, 120, 52.3, 23, 50.2, 56, 72.5, 70, 68.4, 65};

	int n = sizeof(can_nang) / sizeof(can_nang[0]);
	printf("Tong so ung vien: %d\n\n", n); //19 phan tu

	//38< can nang thuong < 75
	//yeu cau 1: liet ke ds thieu can, thua can
	printf("Danh sach thieu can:\n");
	for (int i = 0; i <= 19; i++) {
		if (can_nang[i] <= 38) {
			printf("ung vien[%d] = %.1lf kg\n", i, can_nang[i]);
		}
	}

	printf("\nDanh sach thua can:\n");
	for (int j = 0; j <= 19; j++) {
		if (can_nang[j] >= 75) {
			printf("Ung vien [%d] = %.1lf kg\n", j, can_nang[j]);
		}
	}
	printf("\n\n");

	//yeu cau 2: Tim ung vien nang nhat va nhe nhat
	long double max_can_nang = can_nang[0];
	long double min_can_nang = can_nang[0];
	int max_index = 0;
	int min_index = 0;
	
	for (int m = 0; m < 20; m++) {
		if (can_nang[m] > max_can_nang) {
			max_can_nang = can_nang[m];
			max_index = m;
		}
		if (can_nang[m] < min_can_nang) {
			min_can_nang = can_nang[m];
			min_index = m;
		}
	}

	printf("Ung vien [%d] = %.1lf kg co can nang cao nhat\n", max_index, max_can_nang);
	printf("\nUng vien [%d] = %.1lf kg co can nang thap nhat\n", min_index, min_can_nang);
	printf("\n");

	//yeu cau 3: dem so luong ung vie dat tieu chuan
	int dem = 0;
	for (int o = 0; o < 20; o++) {
		if (can_nang[o] > 38 && can_nang[o] < 75) {
			printf("Ung vien [%d] = %.1lfkg dat yeu cau\n", o, can_nang[o]);
			dem += 1;
		}
	}
	printf("Tong so ung vien dat tieu chuan: %d\n\n", dem);

	//yeu cau 4: tinh so can nang trung binh
	long double S1 = 0;
	long double result = 0;

	for (int p = 0; p < 20; p++) {
		if (can_nang[p] > 38 && can_nang[p] < 75) {
			S1 += can_nang[p];
		}
	}
	result = S1 / dem;
	printf("So can nang trung binh cua cac ung vien dat tieu chuan: %.1lfkg\n\n", result);
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
