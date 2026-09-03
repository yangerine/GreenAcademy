// 7.11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#define max 100

int a[max];
int n;
int x;


void nhap_mang(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		printf("\nPhan tu %d: ", i);
		scanf_s("%d", &a[i]);
	}
}

void xuat_mang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

void insert(int a[], int& n, int x) {
	int i ;
	for (i = n - 1 ; i >= 0; i--) { //dich cac phan tu sang ben phai 1 don vi
		if (a[i] > x) {
			a[i+1] = a[i];
		}
		else //neu a[i] > x thi dung lai
			break;
	}
	a[i + 1] = x;//chen x vao trong mang
	n++;
}

int main()
{
	printf("Nhap so luong cua mang: ");
	scanf_s("%d", &n);

	if (n < 0 || n>100) {
		do {
			printf("\nSo luong khong dung dieu kien!\n");
			printf("Nhap lai so luong cua mang: ");
			scanf_s("%d", &n);
		} while (n < 0 || n>100);
	}

	printf("\nNhap cac phan tu trong mang TU BE DEN LON	.");
	nhap_mang(a, n);
	printf("\nCac phan tu trong mang: ");
	xuat_mang(a, n);

	printf("Nhap so x: ");
	scanf_s("%d", &x);
	insert(a, n, x);

	printf("\nDay so moi sau khi chen so: ");
	xuat_mang(a, n);
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
