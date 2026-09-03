// 8.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int sum(int a, int b) {
	int result = a + b;
	return result;
}

int hieu(int a, int b) {
	int result = a - b;
	return result;
}

int tich(int a, int b) {
	int result = a * b;
	return result;
}

float thuong(int a, int b) {

	float result = (float)a / (float)b;
	return result;

}

int main()
{
	int a, b;
	int choice;

	printf("Nhap gia tri a: ");
	scanf_s("%d", &a);

	printf("Nhap gia tri b: ");
	scanf_s("%d", &b);

	printf("Chon 1 trong nhung phep tinh sau:");
	printf("1. Tong  2. Hieu  3. Tich  4. Thuong  \n");
	scanf_s("%d", &choice);

	switch (choice) {
	case 1: 
		printf("Tong %d + %d la: %d \n", a, b, sum(a, b));
		break;
	case 2: 
		printf("Hieu %d - %d la: %d \n", a, b, hieu(a, b));
		break;
	case 3: 
		printf("Tich %d x %d la: %d \n", a, b, tich(a, b));
		break;
	case 4: 
		if (b == 0)
			printf("Phep tinh vo nghiem!\n");
		else
		{
			printf("Thuong %d / %d la: %.2lf \n", a, b, thuong(a, b));
		}
		break;
	default:
		printf("Phep tinh khong ton tai!\n");
	}

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
