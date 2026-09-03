// PreIT-5.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;

	printf("Nhap so a: \n");
	scanf_s("%d", &a);

	printf("Nhap so b: \n");
	scanf_s("%d", &b);

	printf("Nhap so c: \n");
	scanf_s("%d", &c);

	int max = a;

	if (max < c && b < c) {
		max = c;
	}
	else if (max < b && b > c) {
		max = b;
	}
	printf("%d la so lon nhat.\n", max);

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
