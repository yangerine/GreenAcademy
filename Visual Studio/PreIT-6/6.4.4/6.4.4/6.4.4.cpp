// 6.4.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int N;

	printf("Nhap so nguyen N: \n");
	scanf_s("%d", &N);
	if(N <= 0)
		do {
			printf("N phai la so nguyen duong!\n");
			printf("Nhap so nguyen N: \n");
			scanf_s("%d", &N);
		} while (N <= 0);

	//phep tinh 1
	long double S5 = 0;
	int i = 1;
	while (i <= N) {
		printf("1/%d + ", i);
		S5 += (long double)1 / i;
		i++;
	}
	printf("\nS5 = %.2lf \n\n", S5);

	//phep tinh 2
	long double S6 = 0;
	int j = 1;
	if (j % 2 != 0)
		j += 1;

	while (j <= 2*N) {
		printf("1/%d + ", j);
		S6 += (long double)1 / j;
		j += 2;
	}
	printf("\nS6 = %.2lf\n\n", S6);

	//phep tinh 3
	long double S7 = 0;
	int k = 1;
	
	if (k % 2 == 0)
		k += 1;

	while (k <= 2 * N + 1) {
		printf("1/%d + ", k);
		S7 += (long double)1 / k;
		k += 2;
	}
	printf("\nS7 = %.2lf\n\n", S7);

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
