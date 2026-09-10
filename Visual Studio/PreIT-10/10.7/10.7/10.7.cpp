// 10.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char s[100];
	char c;

	printf("Nhap chuoi ky tu: ");
	gets_s(s, (unsigned int)sizeof(s));

	printf("\nNhap mot ky tu:  ");
	scanf_s("%c", &c);

	int length = strlen(s);

	//dem so luong ky tu x xuat hien trong chuoi s
	int dem = 0;

	for (int i = 0; i < length; i++) {
		if (s[i] == c) {
			dem++;
		}
	}

	printf("\nCo %d ky tu '%c' xuat hien trong chuoi '%s'", dem, c, s);


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
