// 11.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
	struct books
	{
		char title[100];
		char author[50];
		int page;
		int price;
	};

	books book[50];



	int luu_tru;

	printf("Nhap so luong sach can luu tru: ");
	scanf_s("%d", &luu_tru);

	printf("\nNhap thong tin sach: \n");

	//vi \n van bi nhan vao o ham gets_s nen dung ham rewind de loai bo \n
	rewind(stdin);

	for (int i = 0; i < luu_tru; i++)
	{
		printf("Nhap tua de sach: ");
		gets_s(book[i].title);

		printf("\nNhap ten tac gia: ");
		gets_s(book[i].author);

		printf("\nNhap so trang: ");
		scanf_s("%d", &book[i].page);

		printf("\nNhap gia tien: ");
		scanf_s("%d", &book[i].price);

		printf("\n");
		rewind(stdin);

	}

	//xuat thong tin sach
	for (int i = 0; i < luu_tru; i++) {
		printf("\n--Sach %d--\n", i+1);
		printf("Ten: %s	\n", book[i].title);
		printf("Tac gia: %s \n", book[i].author);
		printf("So trang: %d \n", book[i].page);
		printf("Gia: %d VND \n", book[i].price);
	}

	//tim kiem va hien thi nhung cuon sach co tu 200 trang tro len
	printf("\nSach co 200 trang tro len: ");

	for (int i = 0; i < luu_tru; i++) {
		if (book[i].page >= 200) {
			printf(" %s,", book[i].title);
		}
	}

	//tim kiem va hien thi sach co gia thap hon 90.000
	printf("\nSach co gia duoi 90.000 VND: ");

	for (int i = 0; i < luu_tru; i++) {
		if (book[i].price <= 90000) {
			printf(" %s,", book[i].title);
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
