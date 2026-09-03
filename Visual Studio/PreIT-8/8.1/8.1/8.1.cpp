// 8.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

void bang_cuu_chuong(int x) {
	for (int i = 1; i < 11; i++) {
		int result = x * i;
		printf(" %d x %d = %d ", i, x, result);
		printf("\n");
	}
}


int main()
{
	//in bang cuu chuong N do user nhap vao

	int x;

	printf("Nhap gia tri: ");
	scanf_s("%d", &x);

	printf("Bang cuu chuong cua gia tri %d:\n", x);
	bang_cuu_chuong(x);

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
