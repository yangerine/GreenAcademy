// 11.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
	struct sinhvien
	{
		char mssv[15];
		char ho_ten[50];
		char lop[15];
		float toan;
		float anh_van;
		float tin_hoc;
		float dtb;
		char xep_loai[15];
	};

	sinhvien sinh_vien[100];

	//nhap vao so luong can luu tru
	int luu_tru;

	printf("Nhap so luong can luu tru: ");
	scanf_s("%d", &luu_tru);

	for (int i = 0; i < luu_tru; i++) {
		rewind(stdin);

		printf("\nMa so sv: ");
		gets_s(sinh_vien[i].mssv);

		printf("\nHo va ten: ");
		gets_s(sinh_vien[i].ho_ten);

		printf("\nLop: ");
		gets_s(sinh_vien[i].lop);

		printf("\nDiem Toan: ");
		scanf_s("%f", &sinh_vien[i].toan);
		rewind(stdin);

		printf("\nDiem Anh Van: ");
		scanf_s("%f", &sinh_vien[i].anh_van);
		rewind(stdin);

		printf("\nDiem Tin Hoc: ");
		scanf_s("%f", &sinh_vien[i].tin_hoc);
		rewind(stdin);
	}
	

	//tinh diem tb va xep loai
	int dem_gioi = 0;
	int dem_kha = 0;
	int dem_tb = 0;
	int dem_yeu = 0;
	int dem_kem = 0;
	for (int i = 0; i < luu_tru; i++) {
		sinh_vien[i].dtb = (sinh_vien[i].toan + sinh_vien[i].anh_van + sinh_vien[i].tin_hoc) / 3.0f;

		if (sinh_vien[i].dtb < 3.5) {
			strcpy_s(sinh_vien[i].xep_loai, "Kem");
			dem_kem++;
		}
		else if (sinh_vien[i].dtb >= 3.5  && sinh_vien[i].dtb <5.0) {
			strcpy_s(sinh_vien[i].xep_loai, "Yeu");
			dem_yeu++;
		}
		else if (sinh_vien[i].dtb >= 5.0 && sinh_vien[i].dtb < 6.5) {
			strcpy_s(sinh_vien[i].xep_loai, "Trung Binh");
			dem_tb++;
		}
		else if (sinh_vien[i].dtb >= 6.5 && sinh_vien[i].dtb < 8.0) {
			strcpy_s(sinh_vien[i].xep_loai, "Kha");
			dem_kha++;

		}
		else if (sinh_vien[i].dtb >= 8.0) {
			strcpy_s(sinh_vien[i].xep_loai, "Gioi");
			dem_gioi++;
		}

	}

	//xuat danh sach

	printf("\nMMSV	Ho ten		Lop		Toan	AV	Tin	DTB	Xep loai\n");

	for (int i = 0; i < luu_tru; i++) {
		printf("%s	%s		%s		%.1f	%.1f	%.1f	%.1f	%s\n",
			sinh_vien[i].mssv, sinh_vien[i].ho_ten, sinh_vien[i].lop, sinh_vien[i].toan,
			sinh_vien[i].anh_van, sinh_vien[i].tin_hoc, sinh_vien[i].dtb, sinh_vien[i].xep_loai);

	}

	printf("\nSo sinh vien hoc luc Gioi: %d", dem_gioi);

	printf("\nSo sinh vien hoc luc Kha: %d", dem_kha);

	printf("\nSo sinh vien hoc luc Trung binh: %d", dem_tb);

	printf("\nSo sinh vien hoc luc Yeu: %d", dem_yeu);

	printf("\nSo sinh vien hoc luc Kem: %d", dem_kem);

	//tim thong tin sv bang cach nhap ma so sv
	char mssv_search[15];
	rewind(stdin);
	printf("\nNhap mssv can tim: ");
	gets_s(mssv_search);

	for (int i = 0; i < luu_tru; i++) {
		if (strcmp(mssv_search, sinh_vien[i].mssv) == 0) {
			printf("\nHo va ten: %s", sinh_vien[i].ho_ten);
			printf("\nLop: %s", sinh_vien[i].lop);
			printf("\nDiem Toan: %.1f", sinh_vien[i].toan);
			printf("\nDiem Anh van: %.1f", sinh_vien[i].anh_van);
			printf("\nDiem Tin hoc: %.1f", sinh_vien[i].tin_hoc);
			printf("\nDiem trung binh: %.1f", sinh_vien[i].dtb);
			printf("\nXep loai: %s", sinh_vien[i].xep_loai);
		}

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
