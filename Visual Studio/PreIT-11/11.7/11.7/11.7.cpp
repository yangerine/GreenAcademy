// 11.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct phan_so
{
	int tu_so;
	int mau_so;
};

phan_so phanSo;


void nhap_phan_so(phan_so &phanSo) {
	

	printf("\nNhap tu so: ");
	scanf_s("%d", &phanSo.tu_so);

	printf("\nNhap mau so: ");
	scanf_s("%d", &phanSo.mau_so);
	printf("\n test1");
	if (phanSo.mau_so == 0) {
		do {

			printf("\nMau so phai khac so 0!\nNhap lai mau so: ");
			scanf_s("%d", &phanSo.mau_so);

		} while (phanSo.mau_so == 0);
	}
	printf("\n test2");

}

void xuat_phan_so(phan_so phan_so) {
	if (phanSo.mau_so == 1) {
		printf(" %d ", phanSo.tu_so);
	}
	else if (phanSo.tu_so == 0) {
		printf(" 0 ");
	}
	else
	{
		printf(" %d/%d", phanSo.tu_so, phanSo.mau_so);
	} 
}

int tim_UCLN(int a, int b) {
	a = abs(a);
	b = abs(b);

	while (b != 0) {
		int temp = a;
		b = a % b;
		a = temp;
	}
	return a;
}

phan_so rut_gon(phan_so phanSo) {
	//tim uoc chung cua tu va mau

	int UCLN = tim_UCLN(phanSo.tu_so, phanSo.mau_so);

	phanSo.tu_so = phanSo.tu_so / UCLN;
	phanSo.mau_so = phanSo.mau_so / UCLN;

	return phanSo;
}

phan_so tong_2PS(phan_so phanSo_1, phan_so phanSo_2) {
	phan_so S;

	S.tu_so = (phanSo_1.tu_so * phanSo_2.mau_so) + (phanSo_2.tu_so * phanSo_1.mau_so);
	S.mau_so = phanSo_1.mau_so * phanSo_2.mau_so;

	return rut_gon(S);
}

phan_so hieu_2PS(phan_so phanSo_1, phan_so phanSo_2) {
	phan_so D;

	D.tu_so = (phanSo_1.tu_so * phanSo_2.mau_so) - (phanSo_2.tu_so * phanSo_1.mau_so);
	D.mau_so = phanSo_1.mau_so * phanSo_2.mau_so;

	return rut_gon(D);
}




int  kiem_tra(phan_so phanSo) {
	if (phanSo.tu_so * phanSo.mau_so < 0)
	{
		return -1;
	}
	else if (phanSo.tu_so * phanSo.mau_so > 0) {
		return 1;
	}
}

int main()
{
	//Demo();
	int result = tim_UCLN(24, 36);
	printf("ucln: %d", result);
}

void Demo()
{
	phan_so phanSo_1;
	nhap_phan_so(phanSo_1);
	xuat_phan_so(phanSo_1);

	phan_so phanSo_2;
	nhap_phan_so(phanSo_2);
	xuat_phan_so(phanSo_2);


	phan_so tong_phan_so = tong_2PS(phanSo_1, phanSo_2);
	printf("\nTong 2 ps: ");
	xuat_phan_so(tong_phan_so);

	phan_so hieu_phan_so = hieu_2PS(phanSo_1, phanSo_2);
	printf("\nHieu 2ps: ");
	xuat_phan_so(hieu_phan_so);

	phan_so ps_rut_gon = rut_gon(phanSo_1);
	printf("\n Phan so sau khi rut gon: ");
	xuat_phan_so(ps_rut_gon);


	if (kiem_tra(phanSo_1) == -1) {
		printf("\nPhan so am");
	}
	else if (kiem_tra(phanSo_1) == 1) {
		printf("\nPhan so duong");
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
