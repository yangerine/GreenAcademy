// 8.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int kiem_tra_snt(int N) {
	if (N < 2) {//so <2 khong phai la so nguyen to, tra ve gia tri 0
		return 0;
	}

	//kiem tra tu 2 den can bac hai cua N vi 1 uoc cua N luon < cbh cua N
	for (int i = 2; i <= sqrt(N); i++) {
		if (N % i == 0) {//neu chia het cho 1 phan tu thi dung vong lap luon va tra ve 0
			return 0;
		}
	}

	//neu vong lap khong stop thi tra ve gia tri 1
	return 1;
}

void liet_ke_snt(int N) {
	printf("Cac so nguyen to nho hon %d: ", N);
	for (int i = 1; i <= N; i++) {
		//kiem tra tung so 1 co phai la so nguyen to khong
		if (kiem_tra_snt(i) == 1)
		{
			printf("%d ", i);
		}
	}
}

int main()
{
	int N;

	printf("Nhap so nguyen: ");
	scanf_s("%d", &N);
	printf("\n");



	if (kiem_tra_snt(N) == 0) {
		printf("%d khong phai so nguyen to.\n", N);
	}
	else if (kiem_tra_snt(N) == 1) {
		printf("%d la so nguyen to.\n", N);
		liet_ke_snt(N);
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
