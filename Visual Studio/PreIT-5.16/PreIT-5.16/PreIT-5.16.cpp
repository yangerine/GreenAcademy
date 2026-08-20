// PreIT-5.16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int loai_tien;

	printf("        VUI LONG CHON LOAI TIEN DOI \n");
	printf("1. USD   2. EUR   3. AUD   4. HKD   5. SGD \n");
	scanf_s("%d", &loai_tien);

	long int menh_gia;
	printf("Vui long nhap menh gia can doi: \n");
	scanf_s("%ld", &menh_gia);

	const int USD = 21080;
	const int EUR = 28276;
	const int AUD = 19151;
	const int HKD = 2679;
	const int SGD = 16624;

	switch (loai_tien) {
	case 1: printf("So tien doi la: %d VND\n", menh_gia * USD); break;
	case 2: printf("So tien doi la: %d VND\n", menh_gia * EUR); break;
	case 3: printf("So tien doi la: %d VND\n", menh_gia * AUD); break;
	case 4: printf("So tien doi la: %d VND\n", menh_gia * HKD); break;
	case 5: printf("So tien doi la: %d VND\n", menh_gia * SGD); break;
	default: printf("Sai loai tien!\n"); break;
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
