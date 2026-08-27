// 7.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	const int n = 5;
	/*printf("Tong so trong day:");
	scanf_s("%d", &n);
	printf("\n");*/
	
	long int array[n];


	printf("Nhap cac gia tri cho bang (tong 10 so): ");
	for (int i = 0; i < n; i++) {
		printf("so [%d] =  ", i);
		scanf_s("%ld", &array[i]);
	}

	bool symmetry = true;

	for (int i = 0; i < n; i++) { 
		if (array[i] != array[n - 1 - i]) { 
			symmetry = false; //neu khong doi xung thi ngung vong lap
			break;
		}
	}
	if (symmetry)
		printf("Day la mot mang doi xung.\n");
	else
		printf("Day la mot mang khong doi xung.\n");





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
