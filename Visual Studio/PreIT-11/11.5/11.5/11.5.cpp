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
	int price;
};

mau_giay giay[50];

void nhap_giay(mau_giay giay[], int so_luong) {

	for (int i = 0; i < so_luong; i++) {
		printf("\nID: ");
		gets_s(giay[i].ID);

		printf("\nSize: ");
		scanf_s("%f", &giay[i].size);

		printf("\nSex (0 or 1 or 2): ");
		scanf_s("%d", &giay[i].sex);

		switch (giay[i].sex) {
		case 1: printf("- Danh cho nam"); break;
		case 2: printf("- Unisex"); break;
		case 0: printf("- Danh cho nu"); break;
		}
		                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
		printf("\n\nAmmount: ");
		scanf_s("%d", &giay[i].ammount);

		printf("\nPrice: ");
		scanf_s("%d", &giay[i].price);

		while (getchar() != '\n');

	}
}

void xuat_giay(mau_giay giay[], int so_luong) {
	for (int i = 0; i < so_luong; i++) {
		printf("\n-----------\n");
		printf("\nID: %s", giay[i].ID);
		printf("\nSize: %.1f", giay[i].size);
		printf("\nGioi tinh: %d", giay[i].sex);
		printf("\nSo luong: %d", giay[i].ammount);
		printf("\nDon gia: %d", giay[i].price);
	}
}

//tim giay dua vao gioi tinh và kich thuoc
void tim_giay(int gioi_tinh, float size_giay) {
	bool tim_thay = false;
	
	for (int i = 0; i < so_luong; i++) {
	
		if (giay[i].sex == gioi_tinh && size_giay == giay[i].size) {
			printf("\nID: %s", giay[i].ID);
			printf("\nSize: %.1f", giay[i].size);
			printf("\nGioi tinh: %d", giay[i].sex);
			printf("\nSo luong: %d", giay[i].ammount);
			printf("\nDon gia: %d", giay[i].price);
			printf("\n-----------\n");

			tim_thay = true;
		}
	}

	if (!tim_thay) {
		printf("\nKhong ton tai mau giay!");
	}
}

void mua_giay(char ma_giay[], int so_luong_can_tim) {
	int index_can_tim = -1;
	
	int i = 0;

	for (; i < so_luong; i++) {
		if (strcmp(ma_giay, giay[i].ID) == 0) {
			printf("\nMa giay nay co ton tai.");
			index_can_tim = i;
			break;
		}
	}

	if (index_can_tim == -1) {
		printf("\nMa giay khong ton tai!");
		return;
	}

	if (so_luong_can_tim <= giay[index_can_tim].ammount) {
		printf("\nGiay con hang!");
		int tong_tien = giay[i].price * so_luong_can_tim;
		printf("\nSo tien can tra: %d VND", tong_tien);
	}
	else {
		printf("\nSo luong trong kho khong du so luong can mua!");
	}

	
}

int main()
{

	printf("Nhap so luong: ");
	scanf_s("%d", &so_luong);
	rewind(stdin);

	nhap_giay(giay, so_luong);
	xuat_giay(giay, so_luong);

	//tim giay
	int gioi_tinh;
	float size_giay;

	printf("\n\nNhap gioi tinh (0-nu; 1-nam; 2-unisex) : ");
	scanf_s("%d", &gioi_tinh);

	printf("\nNhap size giay: ");
	scanf_s("%f", &size_giay);
	
	tim_giay(gioi_tinh, size_giay);

	char ma_giay[15];
	int so_luong_can_tim;

	rewind(stdin);
	printf("\n\nNhap ma giay muon tim: ");
	gets_s(ma_giay);

	rewind(stdin);
	printf("\nNhap so luong muon mua: ");
	scanf_s("%d", &so_luong_can_tim);

	mua_giay(ma_giay, so_luong_can_tim);

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
