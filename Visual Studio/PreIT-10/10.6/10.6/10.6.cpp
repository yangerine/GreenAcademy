// 10.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char s[100];
	
	printf("Nhap chuoi ky tu: ");
	gets_s(s, (unsigned int)sizeof(s));

	int length = strlen(s);

	//dem so luong tu co trong chuoi
	//dung ham isspace?
	//start dem = 1, voi moi mot lan isspace xuat hien dem++
	int dem = 1;

	for (int i = 0; i < length; i++) {
		if (isspace(s[i]) != 0) {
			dem++;
		}
	}

	printf("\nCo %d tu trong chuoi '%s' ", dem, s);


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
