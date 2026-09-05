// 8.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int n;

void tong_so(int n, long& ket_qua_tong_so) {
	ket_qua_tong_so = 0;
	for (int i = 0; i <= n; i++) {
		ket_qua_tong_so += i;
	}
}

void tong_hieu_xen_ke(int n, long& ket_qua_tong_hieu_xen_ke) {
	ket_qua_tong_hieu_xen_ke = 0;
	for (int i = 0; i <= n; i++) {
		if (i % 2 == 0) {
			ket_qua_tong_hieu_xen_ke -= i;
		}
		else
		{
			ket_qua_tong_hieu_xen_ke += i;
		}
		
	}
}

int main()
{
	long ket_qua_tong_so = 0;
	long ket_qua_tong_hieu_xen_ke = 0;

	printf("Nhap so nguyen: ");
	scanf_s("%d", &n);

	tong_so(n, ket_qua_tong_so);
	tong_hieu_xen_ke(n, ket_qua_tong_hieu_xen_ke);

	printf("Tong so tu 1 den %d la: %d\n", n, ket_qua_tong_so);
	printf("Tong hieu xen ke tu 1 den %d la: %d", n, ket_qua_tong_hieu_xen_ke);

	

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
