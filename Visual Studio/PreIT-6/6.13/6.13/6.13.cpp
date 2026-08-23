// 6.13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;

	printf("Nhap so a: \n");
	scanf_s("%d", &a);

	printf("Nhap so b: \n");
	scanf_s("%d", &b);

	//tim tong so le trong khoang tu a -> b
	int long S = 0;

	if (a % 2 == 0) // neu la chan thi tang len 1 thanh so le
		a++;
	for (int i = a; i <= b; i += 2) {
			S += i;
	}
	printf("Tong so le tu %d den %d la: %d", a, b, S);
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
