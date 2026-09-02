// 7.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define max 100

int a[max];
int n;

int max_value;
int min_value;
int first_pos;
int last_pos;
int x;
int dem = 0;


void lon_nhat(int a[], int n, int &max_value);
void be_nhat(int a[], int n, int &min_value);
void nhap_mang(int a[], int &n);
void xuat_mang(int a[], int n);
void x_first_pos(int a[], int n, int &first_pos);
void x_last_pos(int a[], int n, int &last_pos);
void count(int a[], int n, int &dem);

int main()
{	
	printf("Nhap so luong cua mang: ");
	scanf_s("%d", &n);

	if (n < 1 || n > 100) {
		do {
			printf("So luong cua mang phai nam trong khoang tu 1 den 100!\n");
			printf("Nhap so luong cua mang: ");
			scanf_s("%d", &n);
		} while (n < 1 || n > 100);
	}

	nhap_mang(a, n);
	printf("Gia tri cac phan tu trong mang: ");
	xuat_mang(a, n);

	printf("\nPhan tu lon nhat la:");
	lon_nhat(a, n, max_value);
	printf("%d", max_value);

	printf("\nPhan tu be nhat la: ");
	be_nhat(a, n, min_value);
	printf("%d", min_value);

	printf("\nNhap so can tim (x): ");
	scanf_s("%d", &x);

	x_first_pos(a, n, first_pos);
	printf("\nVi tri dau tien cua %d xuat hien trong mang la: %d", x, first_pos);

	x_last_pos(a, n, last_pos);
	printf("\nVi tri cuoi cung cua %d xuat hien trong mang la: %d", x, last_pos);

	count(a, n, dem);
	printf("\nSo lan %d xuat hien trong mang la: %d lan", x, dem);

	
}

//nhap mang
void nhap_mang(int a[], int &n) {
	printf("Nhap cac gia tri cac phan tu trong mang:");
	for (int i = 0; i < n; i++) {
		printf("\nPhan tu %d: ", i);
		scanf_s("%d", &a[i]);
	}
}

//xuat mang
void xuat_mang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

//ham tra gia tri(value) va chi so(pos) cua phan tu lon nhat
void lon_nhat(int a[], int n, int &max_value) {
	max_value = a[0];
	int max_index = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > max_value) {//so sanh tung phan tu mot tu trai qua voi nhau
			max_value = a[i];
			max_index = i;
		}
	}

}

//ham tra gia tri va chi so cua phan tu nho nhat
void be_nhat(int a[], int n, int &min_value) {
	min_value = a[0];
	int min_index = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] < min_value) {
			min_value = a[i];
			min_index = i;
		}
	}
}

//ham tra vi tri dau tien cua so x xuat hien trong mang
void x_first_pos(int a[], int n, int &first_pos) {
	//xet xem x bang gia tri nao trong mang
	for (int i = 0; i < n; i++) {
		
		if (x == a[i]) {
			first_pos = i;
			break;
		}
		
	}
}

//ham tra vi tri cuoi cung cua so x xuat hien trong mang
void x_last_pos(int a[], int n, int &last_pos) {
	for (int i = n; i > 0; i--) {
		
		if (x == a[i]) {
			last_pos = i;
			break;
		}
	}
}

//dem so lan x xuat hien trong mang
void count(int a[], int n, int &dem) {
	for (int i = 0; i < n; i++) {
		if (x == a[i])
			dem += 1;
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
