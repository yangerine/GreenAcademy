// 7.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>



void NhapMang(int &Soluong, int Arr[]) {
	printf("So luong phan tu muon su dung: ");
	scanf_s("%d", &Soluong);
	if (Soluong > 20 || Soluong <=0 )
	{
		do {
			printf("\nSo luong phan tu nhap vao phai < 20!\n");
			printf("So luong phan tu muon su dung: ");
			scanf_s("%d", &Soluong);
		} while (Soluong > 20 || Soluong <= 0);
	}

	for (int i = 0; i < Soluong; i++) {
		printf("Arr[%d]: ", i);
		scanf_s("%d", &Arr[i]);
	}
}

void XuatMang(int Soluong, int Arr[]) {
	//xuat gia tri cua tat ca cac phan tu co trong day
	for (int i = 0; i < Soluong; i++) {
		printf("%d ", Arr[i]);
	}
}

void HoanVi(int& a, int& b) {
	//dao 2 gia tri cua 2 tham so
	int temp = a;
	a = b;
	b = temp;
}

//sap xep cac gia tri theo thu tu tang dan
//so lon hon se duoc day ve cuoi day
void BubbleSort(int Soluong, int Arr[]) {
	for (int i = 0; i < Soluong; i++) { //xet khoang tu dau den cuoi
		for (int j = 0; j < Soluong - 1 - i; j++) { //xet so tiep theo, bo di so lon hon da xet o tren
			if (Arr[j] > Arr[j + 1]) { //truoc > sau thi doi so lon hon ve sau
				HoanVi(Arr[j], Arr[j+1]);
			}
		}
	}
}

//sap xep theo thu tu gian dan
void SelectionSort(int Soluong, int Arr[]) {

	for (int i = 0; i < Soluong; i++) {
		//gia su so dau la so lon nhat
		int max_index = i;

		//so sanh so thu 2 (i+1) voi so dau tien de tim ra so lon hon
		for (int j = i + 1; j < Soluong; j++){
			if (Arr[j] > Arr[max_index])

				//cap nhat lai chi so lon nhat
				max_index = j;
		}

		//neu so lon nhat khong phai la i
		//doi vi tri giua 2 so
		if (max_index != i)
			HoanVi(Arr[i], Arr[max_index]);
	}
}


int main()
{
	const int max = 20;
	int Arr[max];
	int Soluong;

	NhapMang(Soluong, Arr);
	printf("Day so gom %d nguyen tu: ", Soluong);
	XuatMang(Soluong, Arr);

	printf("\nSap xep theo thu tu tang dan: ");
	BubbleSort(Soluong, Arr);
	XuatMang(Soluong, Arr);

	printf("\nSap xep theo thu tu giam dan: ");
	SelectionSort(Soluong, Arr);
	XuatMang(Soluong, Arr);
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
