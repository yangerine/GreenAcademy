// 6.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int x, N;

	printf("Nhap so x: \n");
	scanf_s("%d", &x);

	printf("Nhap so N: \n");
	scanf_s("%d", &N);

	long double S1 = 1;
	for (int i = 1; i <= N; i++) {
		S1 += (long double)x / i;
	}
	printf("Tong phuong trinh x + x/2 +...+ x/%d la: %.2lf \n", N, S1);

	//phep tinh 2

	long double S2 = 0; //tong
	long double temp = 1; //luy thua
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			temp *= j;
		}
		S2 += temp / pow(x, i);
	}
	printf("Tong phuong trinh 1/x + 2!/x^2 +...+%d!/x^%d la: %.2lf \n", N, N, S2);

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
