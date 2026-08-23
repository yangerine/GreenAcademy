// 6.12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int canh = 4;

	//hinh 10,11
	printf("Hinh 10\n");
	for (int i = 1; i <= canh; i++) {
		for (int j = 1; j <= canh; j++) //lap * va " "
		{
			printf("* ");
		}
		printf("\n");
	}

	printf("Hinh 11\n");
	for (int i = 1; i <= canh; i++) {
		for (int j = 1; j <= canh; j++)
		{
			if (i == 1 || i == canh || j == 1 || j == canh)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}

	//hinh 12, 13
	int chieu_dai = 5;
	int chieu_rong = 3;

	printf("hinh 12\n");
	for (int i = 1; i <= chieu_rong; i++) {
		for (int j = 1; j <= chieu_dai; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	printf("Hinh13\n");
	for (int i = 1; i <= chieu_rong;i++) {
		for (int j = 1; j <= chieu_dai; j++) 
		{
			if (i == 1 || i == chieu_rong || j == 1 || j == chieu_dai)
				printf("* ");
			else
				printf("  ");

		}
		printf("\n");
	}

	//hinh 14, 15, 16, 17
	int canh_tam_giac = 4;

	printf("Hinh 14\n");
	for(int i = 1; i <= canh_tam_giac; i++){
		for (int j = 1; j <= i; j++) //tang dan theo dong
		{
			printf("* ");
		}
		printf("\n");
	}

	printf("Hinh 15\n");
	for (int i = 1; i <= canh_tam_giac; i++) 
	{
		for (int j = 1; j <= i; j++) 
		{
			if (i == 1 || j == 1 || i == j || i == canh_tam_giac)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}

	printf("Hinh 16\n");
	for (int i = 1; i <= canh_tam_giac; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}

	printf("Hinh 17\n");
	for (int i = 4; i >= 1 ; i--) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
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
