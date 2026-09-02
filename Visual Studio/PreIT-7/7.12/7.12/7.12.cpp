// 7.12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
#define max 100

int a[100];
int n;


void nhap_mang(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		printf("\nPhan tu %d: ", i);
		scanf_s("%d", &a[i]);
	}
}

void hien_thi(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}


int kiem_tra(int x) {
	if (x % 4 == 0)
		return 1;
	else
	{
		return 0;
	}
}

void xoa_phan_tu(int vi_tri) {
	for (int i = vi_tri; i < n; i++) {
		a[i] = a[i + 1];
	}
	n--;
}

int main()
{
	printf("Nhap so luong cua mang: ");
	scanf_s("%d", &n);

	printf("\nNhap gia tri tung phan tu.\n");
	nhap_mang(a, n);

	for (int i = 0; i < n; i++) {
		if (kiem_tra(a[i]) == 1) {
			xoa_phan_tu(i);
			i--;
			//sau khi xoa phan tu tiep se o vi tri i
			//can xoa i de xet phan tu tiep theo
		}
	}

	printf("\nMang a sau khi xoa phan tu chia het cho 4: ");
	hien_thi(a, n);

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
