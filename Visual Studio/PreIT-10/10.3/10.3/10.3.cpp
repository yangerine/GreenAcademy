// 10.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char input[100];

	int dem = 0;

	printf("Nhap chuoi ky tu: ");

	//ham scanf_s chi nhan gia tri truoc khoang trang
	/*scanf_s("%s", input, (unsigned int)sizeof(input));*/
	//de co the nhan chuoi ky tu bao gom khoang trang
	//dung ham fgets
	fgets(input, sizeof(input), stdin);

	int do_dai = strlen(input);

	//dem tat ca ky tu trong chuoi (khong tinh khoang trang)

	for (int i = 0; i < do_dai; i++) 
	{
		if ( isalpha(input[i]) != 0)//neu isalpha TRUE
		{
			dem ++;
		}
		
	}

	printf("Tong so ky tu trong mang la: %d", dem);
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
