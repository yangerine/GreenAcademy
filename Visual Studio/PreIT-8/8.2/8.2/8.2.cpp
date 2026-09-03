// 8.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int binh_phuong(int x) {
	int result1 = pow(x, 2);
	return result1;
}

double can_bac_hai(int x) {
	double result2 = sqrt(x);
	return result2;
}

int main()
{
	//nhap so
	//tinh binh phuong, can bac hai

	int x;

	printf("Nhap so x: ");
	scanf_s("%d", &x);
	printf("\n");

	printf("Binh phuong cua %d la: %d \n", x, binh_phuong(x));

	printf("Can bac hai cua %d la: %.2lf \n", x, can_bac_hai(x));
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
