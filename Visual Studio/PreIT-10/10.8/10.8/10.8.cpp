// 10.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
	char s[100];

	printf("Nhap ho va ten: ");
	gets_s(s, (unsigned int)sizeof(s) );

	int length = strlen(s);

	//in ra ten viet tat 
	//in ra ky tu dau tien
	//sau mang space thi lay 01 ky tu sau no
	//toupper de IN HOA

	printf("\nTen viet tat cua '%s' la: ", s);
	printf("%c.", toupper(s[0]));

	for (int i = 1; i < length; i++) {
		if (isspace(s[i]) != 0) {
			printf("%c.", toupper(s[i + 1]));
		}

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
