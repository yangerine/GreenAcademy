// 11.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int so_luong;

struct mau_giay
{
	char ID[6];
	float size;
	int sex;
	int ammount;
	float price;
};

void nhap_giay(mau_giay giay[]) {
	printf("Nhap so luong: ");
	scanf_s("%d", &so_luong);

	while (getchar() != '\n');

	for (int i = 0; i < so_luong; i++) {
		printf("\nID: ");
		gets_s(giay[i].ID);

		printf("\nSize: ");
		scanf_s("%f", &giay[i].size);

		printf("\nSex (0 or 1 or 2): ");
		scanf_s("%d", &giay[i].sex);

		switch (giay[i].sex) {
		case 1: printf("\nDanh cho nam"); break;
		case 2: printf("\nUnisex"); break;
		case 0: printf("\nDanh cho nu"); break;
		}
		                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
		printf("\nAmmount: ");
		scanf_s("%d", &giay[i].ammount);

		printf("\nPrice: ");
		scanf_s("%f", &giay[i].price);

		while (getchar() != '\n');

	}
}

void xuat_giay() {

}

int main()
{

	mau_giay giay[50];

	nhap_giay(giay);

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
