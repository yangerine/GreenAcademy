// 7.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int arr[6] = { 2,3,4,5 };

	//them gia tri 6 vao phan tu o vi tri cuoi day
	arr[4] = 6;
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}

	//them gia tri 1 vao phan tu o vi tri dau day
	//dich chuyen cac phan tu sang phai 1 don vi
	//xet tu phai sang trai
	for (int i = 5; i > 0; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = 1; //gan gia tri dau = 1
	printf("\n\n");
	for (int i = 0; i < 5; i++) {
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
