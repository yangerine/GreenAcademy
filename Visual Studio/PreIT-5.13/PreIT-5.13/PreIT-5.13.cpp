// PreIT-5.13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int thang;
	

	printf("Nhap so thang: \n");
	scanf_s("%d", &thang);

	switch (thang) 
	{
	case 1: 
	case 3: 
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: printf("Thang co 31 ngay.\n"); break;

	case 4:
	case 6:
	case 9:
	case 11: printf("Thang co 30 ngay.\n"); break;

	case 2:
	{
		int nhuan;
		printf("Thuoc nam nhuan (1) hay khong nhuan (0)?\n");
		scanf_s("%d", &nhuan);

		switch (nhuan) 
		{
		case 1: printf("Thang co 29 ngay.\n"); break;
		case 0: printf("Thang co 28 ngay.\n"); break;
		default: printf("Khong hop le.\n"); break;
		}
	}

	//default: printf("Ngay khong hop le.\n"); break;

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
