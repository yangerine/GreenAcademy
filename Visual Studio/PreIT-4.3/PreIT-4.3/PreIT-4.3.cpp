// PreIT-4.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int ban_kinh;
	const double pi = 3.14;

	printf("Nhap ban kinh hinh tron: \n");
	scanf_s("%d", &ban_kinh);

	double chuvi = 2 * (double)ban_kinh * pi;
	double dientich = pi * ban_kinh * ban_kinh;

	printf("Chu vi hinh tron la: %.2f \n", chuvi);
	printf("Dien tich hinh tron la: %.2f \n", dientich);
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
