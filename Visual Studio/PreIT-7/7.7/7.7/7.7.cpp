// 7.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
#define max 10

void add_value(int value, int pos);
void remove_value(int pos);
void output_arr();


int arr[max] = { 1,2,3,4,5,6,7,8,9 };

int value;
int pos;
int n = 9;

int main()
{
	//bien so luong phan tu dang su dung la 9 cung duoc khai bao toan cuc

	printf("Nhap gia tri: ");
	scanf_s("%d", &value);

	printf("\nVi tri can them: ");
	scanf_s("%d", &pos);

	add_value(value, pos);
	output_arr();

	printf("\nNhap vi tri phan tu can xoa: ");
	scanf_s("%d", &pos);

	remove_value(pos);
	output_arr();

}

//tang bien so luong phan tu len +1
void add_value(int value, int pos) {//gia tri va vi tri phan tu can them
	//kiem tra vi tri co hop le khong
	if (pos < 0 || pos > max) {
		printf("Vi tri can them khong hop le!\n");
		return;
	}

	//dich chuyen vi tri cua cac phan tu sang ben phai 1 don vi bat dau tu vi tri pos
	for (int i = n; i > pos; i--) { //xet tu phai qua trai
		arr[i] = arr[i-1];
	}

	arr[pos] = value;//gan gia tri moi vao mang
	n++;
}

//xoa 1 phan tu ra khoi mang
//giam bien so luong phan tu -1
void remove_value(int pos) {
	if (pos < 0 || pos > max) {
		printf("Vi tri can xoa khong hop le!\n");
		return;
	}
	for (int i = pos; i < n - 1 ; i++) {//tinh tu vi tri duoc them vao (pos) dich sang ben trai
		arr[i] = arr[i + 1];
	}
	n--;
}

//hien tri gia tri cua tung phan tu trong mang
void output_arr() {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
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
