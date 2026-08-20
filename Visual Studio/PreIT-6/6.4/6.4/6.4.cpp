// 6.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int N;

	printf("Nhap so N: \n");
	scanf_s("%ld", &N);

	//Phep 1
	long double S1 = 0;
	for (int i = 2; i <= N; i++) {
		S1 = (long double)1 + (long double)1 / i;
	}
	printf("Tong phep 1 tu 1 + 1/2 + 1/3 +... + 1/%d = %.2lf \n", N, S1);

	//Phep 2
	long double S2 = 0;
	for (int i = 2; i <= N*2; i += 2) {
		S2 = (long double)1 + (long double)1 / i;
	}
	printf("Tong phep 1 tu 1 + 1/2 + 1/4 +... + 1/%d = %.2lf \n", N*2, S2);

	//phep 3
	long double S3 = 0;
	for (int i = 1; i <= (2 * N + 1); i += 2) {
		S3 = (long double)1 + (long double)1 / i;
	}
	printf("Tong phep 1 tu 1 + 1/3 + 1/5 +... + 1/%d = %.2lf \n", N * 2 + 1, S3);
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
