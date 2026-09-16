// 11.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct thuc_pham
{
	char ten_hang[50];
	char ma_hang[7];
	int so_luong;
	int don_gia;
};

thuc_pham san_pham[10];
int tong_so_luong = 3;

void hien_thi_thong_tin() {
	printf("\n-------------------------------------\n");
	printf("Ten hang hoa    |    Ma hang    |    So luong    |    Don gia\n");
	
	for (int i = 0; i < tong_so_luong; i++) {
		printf("%s               %s              %d           %d\n",
			san_pham[i].ten_hang, san_pham[i].ma_hang,
			san_pham[i].so_luong, san_pham[i].don_gia);
	}
}

void tim_san_pham(char ma_hang_can_tim[]) {

	bool isFound = false;

	for (int i = 0; i < tong_so_luong; i++) {
		if (strcmp(san_pham[i].ma_hang, ma_hang_can_tim) == 0) {
			printf("\nTen hang hoa: %s", san_pham[i].ten_hang);
			printf("\nSo luong: %d", san_pham[i].so_luong);
			printf("\nDon gia: %d", san_pham[i].don_gia);
			isFound = true;
		}
	}

	if (!isFound) {
		printf("\nKhong tim thay!");
	}
}

void mua_hang(char ma_hang_can_tim, int so_luong_mua) {

}

int main()
{
	printf("\n---Nhap thong tin san pham---\n");
	for (int i = 0; i < tong_so_luong; i++) {
		rewind(stdin);
		printf("\n----------------------\n");
		printf("\nNhap ten hang: ");
		gets_s(san_pham[i].ten_hang);

		rewind(stdin);
		printf("\nNhap ma hang: ");
		gets_s(san_pham[i].ma_hang);

		printf("\nNhap so luong: ");
		scanf_s("%d", &san_pham[i].so_luong);

		printf("\nNhap don gia: ");
		scanf_s("%d", &san_pham[i].don_gia);

	}

	hien_thi_thong_tin();

	char ma_hang_can_tim[10];

	rewind(stdin);
	printf("\nNhap ma hang can tim: ");
	gets_s(ma_hang_can_tim);

	tim_san_pham(ma_hang_can_tim);
	

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
