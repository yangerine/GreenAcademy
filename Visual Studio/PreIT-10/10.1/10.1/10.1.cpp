// 10.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>


int main()
{
	char input[100];
	
	printf("Nhap chuoi ky tu: ");

	//bo sung them tham so sau input de biet duoc mang input co bao nhieu ky tu
	//ngan tran bo nho
	//dung %s vi nhap vao chuoi khong co mang trang
	scanf_s("%s", input, (unsigned int)sizeof(input));  
	
	//in tung ky tu tren tung hang
	int do_dai = strlen(input);

	printf("Chuoi ky tu da nhap theo chieu xuoi: \n");

	for (int i = 0; i < do_dai; i++) 
	{
		printf("%c\n", input[i]);
	}

	//in tung ky tu nguoc tren tung hang

	printf("Chuoi ky tu da nhap theo chieu nguoc: \n");

	for (int i = do_dai; i >= 0; i--) {
		printf("%c\n", input[i]);
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
