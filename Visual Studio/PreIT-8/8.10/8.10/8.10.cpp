// 8.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

void hoan_vi(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void xuat_gia_tri(char a, int n) { //ten bien va gia tri cua bien
	printf("Bien %c co gia tri %d.\n", a, n);
}

int main()
{
	int a, b;

	printf("Nhap so a: ");
	scanf_s("%d", &a);

	printf("Nhap so b: ");
	scanf_s("%d", &b);

	xuat_gia_tri('a', a);
	xuat_gia_tri('b', b);

	hoan_vi(a, b);
	printf("\n");

	xuat_gia_tri('a', a);
	xuat_gia_tri('b', b);

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
