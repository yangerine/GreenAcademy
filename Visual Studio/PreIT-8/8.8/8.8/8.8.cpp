// 8.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
#define pi 3.14

float dien_tich_hinh_tron(int ban_kinh) {
	float dien_tich = pow(ban_kinh,2) * pi;
	return dien_tich;
}

float chu_vi_hinh_tron(int ban_kinh) {
	float chu_vi = ban_kinh * 2 * pi;
	return chu_vi;
}

float dien_tich_hinh_vuong(int canh) {
	float dien_tich = (float) pow(canh, 2);
	return dien_tich;
}

float chu_vi_hinh_vuong(int canh) {
	float chu_vi = (float)canh * 4;
	return chu_vi;
}

float dien_tich_hcn(int cd, int cr) {
	float dien_tich = (float)cd * cr;
	return dien_tich;
}

float chu_vi_hcn(int cd, int cr) {
	float chu_vi = (float)(cd + cr) * 2;
	return chu_vi;
}

void xuat_ket_qua(int hinh_dang, float chu_vi, float dien_tich) {

	switch (hinh_dang) {
	case 1: 
		printf("\nChu vi hinh tron la : %.2lf", chu_vi);
		printf("\nDien tich hinh tron la: %.2lf", dien_tich);
		break;
	case 2: 
		printf("\nChu vi hinh vuong la : %.2lf", chu_vi);
		printf("\nDien tich hinh vuong la: %.2lf", dien_tich);
		break;
	case 3: 
		printf("\nChu vi hinh chu nhat la : %.2lf", chu_vi);
		printf("\nDien tich hinh chu nhat la: %.2lf", dien_tich);
		break;
	default: 
		printf("Hinh dang khong dung!");
		break;
	}
}

int main()
{
	int ban_kinh;
	int canh;
	int cd, cr;

	int hinh_dang;


	printf("Chon 1 trong 3 hinh sau:\n");
	printf("1. Hinh tron    2. Hinh vuong    3. Hinh chu nhat\n");
	scanf_s("%d", &hinh_dang);

	switch (hinh_dang) {
	case 1:
		printf("Nhap ban kinh: ");
		scanf_s("%d", &ban_kinh);
		chu_vi_hinh_tron(ban_kinh);
		dien_tich_hinh_tron(ban_kinh);
		xuat_ket_qua(hinh_dang, chu_vi_hinh_tron(ban_kinh), dien_tich_hinh_tron(ban_kinh));
		
		break;
	case 2:
		printf("Nhap canh: ");
		scanf_s("%d", &canh);
		chu_vi_hinh_vuong(canh);
		dien_tich_hinh_vuong(canh);
		xuat_ket_qua(hinh_dang, chu_vi_hinh_vuong(canh), dien_tich_hinh_vuong(canh));

		break;
	case 3:
		printf("Nhap chieu dai: ");
		scanf_s("%d", &cd);
		printf("Nhap chieu rong: ");
		scanf_s("%d", &cr);

		chu_vi_hcn(cd, cr);
		dien_tich_hcn(cd, cr);

		xuat_ket_qua(hinh_dang, chu_vi_hcn(cd,cr), dien_tich_hcn(cd,cr));

		break;
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
