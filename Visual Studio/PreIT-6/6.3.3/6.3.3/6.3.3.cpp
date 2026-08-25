// 6.3.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int N;
	int i = 1;

	printf("Nhap so nguyen N: \n");
	scanf_s("%d", &N);

	if (N <= 0)
		do {
			printf("N phai la so nguyen duong!\n");
			printf("Nhap so nguyen N: \n");
			scanf_s("%d", &N);
		} while (N <= 0);

	//tong so le
	int S1 = 0;
	while (i <= N) {
		printf("%d ", i);
		S1 += i;
		i += 2;
	}
	
	printf("\nTong tu 1 den %d la: %d\n", N, S1);

	//tong so chan
	int S2 = 0;
	int j = 1;
	if (j == 1)
		j += 1;
	while (j <= N) {
		printf("%d ", j);
		S2 += j;
		j += 2;
	}
	printf("\nTong so tu 2 den %d la: %d\n", N, S2);

	//tong so binh phuong
	int S3 = 0;
	int a = 1;

	while (a <= N) {
		printf("%d^2 ", a);
		S3 += pow(a, 2);
		a++;
	}
	printf("\nTong binh phuong cac so tu 1 den %d la: %d\n", N, S3);

	//tong cac so theo cong thuc: 1 - 2 + 3 - 4 + 5 - ...+- N
	int S4 = 0;
	int b = 1;

	while (b <= N) {
		if (b % 2 == 0)
			S4 -= b;   //chan tru
		else
			S4 += b;   //le cong
		printf("%d ", b);
		b++;
	}
	printf("\nTong cac so tu 1 den %d theo cong thuc 1 - 2 + 3 - 4+ ...+- %d la: %d\n", N, N, S4);
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
