// 11.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
	struct nhan_vien
	{
		char ma[5];
		char ho_ten[50];
		char chuc_vu[20];
		int tham_nien;
		int ngay_phep;

	};

	struct nhan_vien nv1 = { "DI01", "Nguyen Kim Long", "Giam doc", 47,17};
	struct nhan_vien nv2 = { "AC05", "Dau Thi Duyen", "Ke toan", 47,25 };
	struct nhan_vien nv3 = { "HR03", "Tran Ha Lan", "Nhan su", 22,7 };
	struct nhan_vien nv4 = { "TR02", "Tran Ngoc Thoa", "Giao vu", 13,9 };
	struct nhan_vien nv5 = { "IT04", "Tran Ngoc Dang", "IT", 4,2 };

	printf("Thong tin nhan vien\n");
	printf("Ma NV: %s\n", nv1.ma);
	printf("Ho ten: %s\n", nv1.ho_ten);
	printf("Chuc vu: %s\n", nv1.chuc_vu);
	printf("Tham nien: %d\n", nv1.tham_nien);
	printf("Ngay phep: %d\n\n", nv1.ngay_phep);

	printf("Thong tin nhan vien\n");
	printf("Ma NV: %s\n", nv2.ma);
	printf("Ho ten: %s\n", nv2.ho_ten);
	printf("Chuc vu: %s\n", nv2.chuc_vu);
	printf("Tham nien: %d\n", nv2.tham_nien);
	printf("Ngay phep: %d\n\n", nv2.ngay_phep);

	printf("Thong tin nhan vien\n");
	printf("Ma NV: %s\n", nv3.ma);
	printf("Ho ten: %s\n", nv3.ho_ten);
	printf("Chuc vu: %s\n", nv3.chuc_vu);
	printf("Tham nien: %d\n", nv3.tham_nien);
	printf("Ngay phep: %d\n\n", nv3.ngay_phep);

	printf("Thong tin nhan vien\n");
	printf("Ma NV: %s\n", nv4.ma);
	printf("Ho ten: %s\n", nv4.ho_ten);
	printf("Chuc vu: %s\n", nv4.chuc_vu);
	printf("Tham nien: %d\n", nv4.tham_nien);
	printf("Ngay phep: %d\n\n", nv4.ngay_phep);

	printf("Thong tin nhan vien\n");
	printf("Ma NV: %s\n", nv5.ma);
	printf("Ho ten: %s\n", nv5.ho_ten);
	printf("Chuc vu: %s\n", nv5.chuc_vu);
	printf("Tham nien: %d\n", nv5.tham_nien);
	printf("Ngay phep: %d\n\n", nv5.ngay_phep);
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
