// 6.6.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int x, N;

	printf("Nhap so nguyen x: \n");
	scanf_s("%d", &x);

	printf("Nhap so nguyen N: \n");
	scanf_s("%d", &N);

	if (x == 0 && N == 0)
		do {
			printf("N va x phai la so nguyen khac 0!\n");
			printf("Nhap so nguyen x: \n");
			scanf_s("%d", &x);

			printf("Nhap so nguyen N: \n");
			scanf_s("%d", &N);

		} while (x == 0 && N == 0);

	//phep tinh 1
	int i = 1;
	long double S10 = 0;

	while (i <= N) {
		printf("%d/%d + ", x, i);
		S10 += (long double)x / i;
		i++;
	}
	printf("\nS10 = %.2lf\n\n", S10);

	//phep tinh 2
	int j = 1;
	long double S11 = 0;
	long int giai_thua = 1;

	while (j <= N) {
		printf("%d!/%d^%d + ", j, x, j);
		giai_thua *= j;
		S11 += giai_thua / pow(x, j);
		j++;
	}
	printf("\nS11 = %.2lf\n\n", S11);


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
