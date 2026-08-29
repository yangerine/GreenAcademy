// 7.9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

void xuat_mang(int n, int arr[]);
void nhap_mang(int& n, int arr[]);
void hoan_vi(int& a, int& b);
void sort(int n, int arr[]);

int main()
{
	const int max = 100;
	int arr[max];
	int n;

	printf("Nhap so luong cua mang: ");
	scanf_s("%d", &n);

	nhap_mang(n, arr);
	xuat_mang(n, arr);
	printf("\n");

	//sap xep cac so chan trong mang tang dan
	sort(n, arr);
	printf("Cac phan tu chan sap xep theo thu tu tang dan: ");
	xuat_mang(n, arr);

}

void nhap_mang(int &n, int arr[]) {
	printf("\nNhap cac phan tu cua mang: ");

	for (int i = 0; i < n; i++) {
		printf("Phan tu %d = ", i);
		scanf_s("%d", &arr[i]);
		printf("\n");
	}

}

void xuat_mang(int n, int arr[]) {
	
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}

void hoan_vi(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void sort(int n, int arr[]) {
	for (int i = 0; i < n-1; i += 2) {//xet tung phan tu la so chan
		if(arr[i] % 2 == 0){
			for (int j = i + 2; j < n; j += 2) {
				if (arr[i] > arr[j] && arr[j] % 2 == 0)
					hoan_vi(arr[i], arr[j]);

			}
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
