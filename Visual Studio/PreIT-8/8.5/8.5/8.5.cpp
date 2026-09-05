
// 8.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int n;

int nhap_so_nguyen() {
	printf("Nhap so nguyen duong: ");
	scanf_s("%d", &n);

	if (n < 0) {
		do {
			printf("So khong hop le.\nNhap lai so nguyen duong: ");
			scanf_s("%d", &n);
		} while (n < 0);
	}
	return n;
}

int giai_thua(int n) {
	int S = 1;
	for (int i = 1; i <= n; i++) {
		S = S * i;
	}
	return S;
}

int main()
{
	//nhap so nguyen duong a,b,c
	int a, b, c;
	int tong_giai_thua = 0;

	a = nhap_so_nguyen();
	b = nhap_so_nguyen();
	c = nhap_so_nguyen();

	
	//tinh tong cac giai thua !a + !b +!c
	tong_giai_thua = giai_thua(a) + giai_thua(b) + giai_thua(c);
	printf("\nTong giai thua cua !%d + !%d +!%d = %d", a, b, c, tong_giai_thua);



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
