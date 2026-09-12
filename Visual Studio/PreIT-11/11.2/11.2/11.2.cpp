// 11.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
	struct books
	{
		char title[100];
		char author[50];
		int page;
		int price;
	};

	books book[50];

	int luu_tru;

	printf("Nhap so luong sach can luu tru: ");
	scanf_s("%d", &luu_tru);

	printf("\nNhap thong tin sach: ");
	printf("\nNhap ten: ");
	scanf_s("%s", book1.)
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
