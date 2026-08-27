// 7.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int N[] = { 10, 44, 23, 0, 54, 15, 28, 94, 64, 109, 76, 47, 82, 99, 72, 48, 28, 17, 4 };
	int A;


	int n = sizeof(N) / sizeof(N[0]);
	printf("Tong so: %d\n", n);

	for (int i = 0; i < n; i++) {
		printf("%d ", N[i]);
	}

	//yeu cau 1: nhap A
	//tim so chan <= A

	printf("\nNhap gia tri so A: ");
	scanf_s("%d", &A);
	printf("\n");


	int found = 0;//bien kiem tra xem da tim duoc chua

	printf("Cac so chan nho hon hoac bang A:\n");
	for (int i = 0; i < n; i++) {
		/*printf("break\n");*/
		if (N[i] % 2 == 0 && N[i] <= A) {
		
			printf("So %d la so chan va <= %d \n", N[i], A);
			found = 1;
		}
	}
	if(!found)
		printf("Khong co phan tu nao thoa man.\n\n");

	//yeu cau 2: nhap B
	//dem lan so trung voi B
	int B;
	int dem = 0;

	printf("Nhap gia tri so B: ");
	scanf_s("%d", &B);
	printf("\n");

	for (int i = 0; i < n; i++) {
		if (N[i] == B) {
			printf("So [%d]: %d la so trung voi %d\n", i, N[i], B);
			dem += 1;
		}
	}
	printf("So lan xuat hien cac phan tu trung voi %d la: %d\n", B, dem);

	//yeu cau 3: nhap X, Y
	//liet ke so trong khoang {X,Y}

	int x, y;

	printf("Nhap gia tri so x: ");
	scanf_s("%d", &x);

	printf("Nhap gia tri so y: ");
	scanf_s("%d", &y);

	for (int i = 0; i < n; i++) {
		if (N[i] > x && N[i] < y) {
			printf("So %d nam trong khoang tu %d den %d\n", N[i], x, y);
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
