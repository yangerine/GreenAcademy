// 12.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
	char string[50];
	int so_luong;

	printf("Nhap vao so luong su dung trong mang: ");
	scanf_s("%d", &so_luong);

	for (int i = 0; i < so_luong; i++) {
		rewind(stdin);
		printf("\nNhap phan tu: ");
		scanf_s("%c", &string[i]);
		printf("\n%lc", string[i]);
	}

	FILE* f;
	char link[200] = "C:\\Users\\Green Academy 08-06\\Documents\\GreenAcademy\\file12-3.txt";

	fopen_s(&f, link, "w");

	fprintf_s(f, "%d\n", so_luong);
	for (int i = 0; i < so_luong; i++) {
		fprintf_s(f, "%lc ", string[i]);
	}

	fclose(f);
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
