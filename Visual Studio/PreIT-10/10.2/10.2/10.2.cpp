// 10.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char input[100];

	printf("Nhap chuoi ky tu: ");
	scanf_s("%s", input, (unsigned int)sizeof(input));

	//lay do dai cua chuoi
	int do_dai = strlen(input);

	//chuyen tat ca ky tu tu IN HOA sang thuong

	for (int i = 0; i < do_dai; i++) {
		//neu IN HOA
		//thi dung ham tolower

		if (input[i] >= 'A' && input[i] <= 'Z') {
			input[i] = tolower(input[i]);
		}
	}

	printf("Chuoi ky tu in thuong: %s", input);

	//chuyen tat ca ky tu thuong sang IN HOA

	for (int i = 0; i < do_dai; i++) 
	{
		if (input[i] >= 'a' && input[i] <= 'z') {
			input[i] = toupper(input[i]);
		}
	}

	printf("\nChuoi ky tu IN HOA: %s", input);
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
