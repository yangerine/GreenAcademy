// 10.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 200

int main()
{
	char s[max];

	printf("Nhap chuoi so: ");
	gets_s(s, (unsigned int)sizeof(s));

	int n = strlen(s);

	char result[max];
	int k = 0;

	//phan tach chuoi co dau phan tach phan ngan, trieu
	char c = ',';

	for (int i = 0; i < n; i++) {
		//gan gia tri result[k] = s[i]
		//dong thoi tang do dai cua chuoi result len k+1
		//tuc la length cua result la i+1 (k==i)
		result[k++] = s[i]; 

		//so vi tri con lai sau s[i]
		int remain = n - 1 - i;

		//neu vi tri con lai la boi so cua 3 va 0 -> them dau ' , '
		if (remain % 3 == 0 && remain > 0) {
			result[k++] = c;
		}
	}

	result[k] = '\0';

	printf("\nSo da tach phan: %s", result);
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
