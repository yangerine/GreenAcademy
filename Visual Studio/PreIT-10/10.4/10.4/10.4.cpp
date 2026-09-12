// 10.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char s1[100];
	char s2[100];

	printf("Nhap chuoi 1:");
	gets_s(s1, (unsigned int)sizeof(s1)); 

	printf("Nhap chuoi 2:");
	gets_s(s2, (unsigned int)sizeof(s2));

	//so sanh do dai 2 chuoi va ket luan
	//dung strlen thay vi strcmp

	int length_s1 = strlen(s1);
	int length_s2 = strlen(s2);

	/*if (length_s1 == length_s2) {
		printf("\nChuoi 1 co do dai bang Chuoi 2\n");
	}
	else if (length_s1 > length_s2)
		printf("Chuoi 1 dai hon Chuoi 2\n");
	else if (length_s1 < length_s2)
		printf("Chuoi 1 it ky tu hon Chuoi 2\n");*/

	if (strcmp(s1,s2) == 0 )  {
		printf("\nChuoi 1 co do dai bang Chuoi 2\n");
	}
	else if (strcmp(s1, s2) > 0)
		printf("Chuoi 1 dai hon Chuoi 2\n");
	else if (strcmp(s1, s2) < 0)
		printf("Chuoi 1 it ky tu hon Chuoi 2\n");

	//kiem tra chuoi s2 co ton tai trong chuoi 1 khong
	char *ton_tai = strstr(s1, s2);
	if (ton_tai != NULL) {
		printf("\nChuoi 2 ton tai trong Chuoi 1: '%s' ", ton_tai);
	}
	else
		printf("\nChuoi 2 khong ton tai trong Chuoi 1.");


	//noi chuoi s2 vao chuoi s1

	strcat_s(s1, s2);

	printf("\nChuoi s1 sau khi noi: %s", s1);
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
