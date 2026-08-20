// 6.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int N;
	long int S_le = 0;
	long int S_chan = 0;
	long long int S_binh_phuong = 0;

	printf("Nhap so nguyen N: \n");
	scanf_s("%d", &N);

	//Tinh tong so le
	for (int i = 1; i <= N; i += 2) {
		S_le += i;
	}
	printf("Tong so le tu 1 den %d la: %d \n", N, S_le);

	//Tinh tong so chan
	for (int i = 0; i <= N; i += 2) {
		S_chan += i;
	}
	printf("Tong so chan tu 0 den %d la: %d \n", N, S_chan);

	//Tinh tong binh phuong
	for (int i = 1; i <= N; i++) {
		S_binh_phuong += pow(i, 2);
	}
	printf("Tong so binh phuong tu 1 den %d la: %d \n", N, S_binh_phuong);

	//Tinh theo cau truc dau * -1
	long int S4 = 0;
	for (int i = 1; i <= N; i++) {
		if (i % 2 == 0)
			S4 -= i; //so chan am 
		else
			S4 += i; //so le duong
	}
	printf("Tong so binh phuong tu 1 - 2 + 3 -... +- %d la: %d \n", N, S4);
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
