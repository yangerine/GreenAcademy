// 11.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct tai_khoan_NH
{
	char ma_tk[12];
	char ten_tk[50];
	int so_du;
};

tai_khoan_NH tai_khoan[10];
int so_luong_tk;
char giao_dich[100] = { "" };

void tao_tai_khoan(tai_khoan_NH tai_khoan[]) {
	//nhap thong tin tai khoan
	//luu vao mang tai_khoan
	printf("\nSo luong tai khoan muon dang ky: ");
	scanf_s("%d", &so_luong_tk);

	for (int i = 0; i < so_luong_tk; i++) {
		rewind(stdin);
		printf("Nhap ma tai khoan ngan hang: ");
		gets_s(tai_khoan[i].ma_tk);

		printf("\nNhap ten tai khoan: ");
		gets_s(tai_khoan[i].ten_tk);

		printf("\nNhap so du tai khoan: ");
		scanf_s("%d", &tai_khoan[i].so_du);
	}
}

int  tra_cuu_tk(char ma_tk[]) {
	int i;
	
	for ( i = 0; i < so_luong_tk; i++) {
		if (strcmp(tai_khoan[i].ma_tk, ma_tk) == 0) {
			return i;
			
		}
	}

	return -1;
}

void tim_tk(char ma_tk[]) {
	int index = tra_cuu_tk(ma_tk);
	if (tra_cuu_tk(ma_tk) != -1) {
		printf("\nMa TK: %s", tai_khoan[index].ma_tk);
		printf("\nTen TK: %s", tai_khoan[index].ten_tk);
		printf("\nSo du: %d VND \n", tai_khoan[index].so_du);
	}
	else {
		printf("\nTai khoan khong tim thay!\n");
	}
}

void chuyen_khoan(char ma_tk_1[], char ma_tk_2[]) {
	int so_tien_ck;
	int index_1 = tra_cuu_tk(ma_tk_1);
	int index_2 = tra_cuu_tk(ma_tk_2);
	
	if (tra_cuu_tk(ma_tk_1) == -1 || tra_cuu_tk(ma_tk_2) == -1) {
		printf("\nTai khoan khong ton tai!");
	}
	else
	{
		tim_tk(ma_tk_1);
		tim_tk(ma_tk_2);
		printf("\nNhap so tien muon chuyen: ");
		scanf_s("%d", &so_tien_ck);

		tai_khoan[index_1].so_du -= so_tien_ck;
		tai_khoan[index_2].so_du += so_tien_ck;

		strcpy_s(giao_dich, "Giao dich da xay ra.");
		printf("\n%s", giao_dich);
		tim_tk(ma_tk_1);
		tim_tk(ma_tk_2);
	}
}

int main()
{
	int exit = 1;

	do{
		printf("\n============MENU============\n");
		printf("Chon cac chuc nang sau day:\n");
		printf("1. Dang ky tai khoan ngan hang\n");
		printf("2. Xem thong tin so du tai khoan\n");
		printf("3. Chuyen khoan\n");

		int choice;
		scanf_s("%d", &choice);

		switch (choice) {
		case 1:
			tao_tai_khoan(tai_khoan);
			break;

		case 2:
			char ma_tk[50];
			rewind(stdin);
			printf("\nNhap ma tai khoan can tim: ");
			gets_s(ma_tk);
			rewind(stdin);

			tim_tk(ma_tk);
			break;

		case 3:
			char ma_tk_1[50];
			char ma_tk_2[50];

			rewind(stdin);
			printf("\nNhap ma tai khoan chuyen: ");
			gets_s(ma_tk_1);

			rewind(stdin);
			printf("\nNhap ma tai khoan nhan: ");
			gets_s(ma_tk_2);

			rewind(stdin);
			printf("\nCK tu TK1 sang TK2.");
			chuyen_khoan(ma_tk_1, ma_tk_2);

			break;

		default:
			printf("\nChuc nang nay khong ton tai!");
			break;
		}

		printf("\nAn '1' de quay ve MENU an '2' de thoat.");
		scanf_s("%d", &exit);

	} while (exit != 2);
	


	
	
	
	

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
