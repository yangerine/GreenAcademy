// 7.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int so_nguyen[] = {10, 25, -4, 32, 63, 81, 19, -24, 13, 18, 45, 12, 72, 42, -6};

	//yeu cau 1: liet ke vi tri va gia tri cac phan tu la so chan
	for (int i = 0; i <= 14; i++) {
		if(so_nguyen[i] % 2 ==0)
			printf("So nguyen[%d]= %d la so chan\n", i, so_nguyen[i]);
	}
	printf("\n\n");

	//yeu cau 2: dem cac phan tu chia het cho 3 && chia het cho 9
	int dem = 0;
	for (int j = 0; j <= 14; j++) {
		if (so_nguyen[j] % 3 == 0 && so_nguyen[j] % 9 == 0) {
			printf("So nguyen[%d] = %d chia het cho 3 va 9\n", j, so_nguyen[j]);
			dem += 1;
		}
	}
	printf("tong so dem: %d\n", dem);
	printf("\n\n");

	//yeu cau 3: tinh tong gia tri cac so chan
	int S1 = 0;
	for (int k = 0; k <= 14; k++) {
		if (so_nguyen[k] % 2 == 0) {
			printf("So nguyen [%d] = %d la so chan\n", k, so_nguyen[k]);
			S1 += so_nguyen[k];
		}
	}
	printf("Tong gia tri cac so chan la: %d\n", S1);
	printf("\n\n");

	//yeu cau 4: tim va hien thi so am
	//thay so am = 0
	for (int m = 0; m <= 14; m++) {
		if (so_nguyen[m] < 0) {
			printf("So nguyen [%d] = %d la so am\n", m, so_nguyen[m]);
			so_nguyen[m] = 0;
			printf("So nguyen [%d] = %d\n", m, so_nguyen[m]);
		}
	}
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
