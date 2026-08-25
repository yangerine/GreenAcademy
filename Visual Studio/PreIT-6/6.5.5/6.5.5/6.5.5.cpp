// 6.5.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int N;

	printf("Nhap so nguyen N: \n");
	scanf_s("%d", &N);

	if (N == 0) {
		do {
			printf("N phai la so nguyen!\n");
			printf("Nhap so nguyen N: \n");
			scanf_s("%d", &N);
		} while (N == 0);
	}

	//phep tinh 1
	int i = 1;
	int S8 = 1;

	while (i <= N) {
		printf("%d *", i);
		S8 *= i;
		i++;
	}
	printf("\nS8 = %d\n\n", S8);

	//phep tinh 2
	//S = 5*4*3*2*1 + 4*3*2*1 +
	int j = 1;
	long int S9 = 0;
	int giai_thua = 1;

	while (j <= N) {
		printf("!%ld + ", j);
		giai_thua *= j;
		S9 += giai_thua;
		j++;
	}
	printf("\nS9 = %ld", S9);

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
