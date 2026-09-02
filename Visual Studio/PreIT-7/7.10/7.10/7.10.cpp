// 7.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
#define max 100

int a[max];
int n;
double average1;
double average2;
double average3;


void nhap_mang(int a[], int& n);
void xuat_mang(int a[], int n);
double average_minus(int a[], int n);
double average_plus(int a[], int n);
double average_3(int a[], int n);

int main()
{
	//nhap/xuat mang a cac so nguyen co n phan tu input tu keyborad
	// 1<= n <=100

	printf("Nhap so luong cua mang: ");
	scanf_s("%d", &n);

	if (n < 1 || n >100) {
		do {
			printf("\nSo luong phai thoa man 1<= n <= 100!\n");
			printf("Nhap lai so luong cua mang: ");
			scanf_s("%d", &n);
		} while (n < 1 || n >100);
	}

	printf("\nNhap tung phan tu cua mang.");
	nhap_mang(a, n);

	printf("\nMang a gom: ");
	xuat_mang(a, n);

	average1 = average_minus(a, n);
	printf("\nGia tri trung binh cua cac phan tu gia tri am: %.2lf", average1);

	average2 = average_plus(a, n);
	printf("\nGia tri trung binh cua cac phan tu gia tri duong: %.2lf", average2);

	average3 = average_3(a, n);
	printf("\nGia tri trung binh cua cac so chan va chia het cho 3: %.2lf", average3);
}

void nhap_mang(int a[], int &n) {
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

//tinh gia tri trung binh cac phan tu am 
//tra gia tri trung binh
//nguoc lai tra ve gia tri 0
double average_minus(int a[], int n) {
	//tim cac phan tu gia tri am
	int S = 0;
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			S += a[i];
			dem += 1;
		}
	}

	//neu co it nhat 1 so am thi tinh trung binh, nguoc lai tra ve 0
	if (dem > 0)
		return (double)S / dem;
	
	return 0;
}

double average_plus(int a[], int n) {
	int S2 = 0;
	int dem2 = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			S2 += a[i];
			dem2++;
		}
	}

	if (dem2 > 0)
		return (double)S2 / dem2;
	return 0;
}

//trung binh cac so chan va chia het cho 3
double average_3(int a[], int n) {
	int S3 = 0;
	int dem3 = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0 && a[i] % 3 == 0) {
			S3 += a[i];
			dem3++;
		}
	}

	if (dem3 > 0)
		return (double)S3 / dem3;
	return 0;
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
