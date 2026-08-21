// 6.9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int N;
	int chu_so;

	printf("Nhap so N(>99): \n");
	scanf_s("%d", &N);

	if (N < 99)
		printf("N phai lon hon 2 chu so.\n");

	//khi chia het cho 10 thi so du = so hang don vi
	//VD: 147/10 = 14.7
	//so 7 hang don vi = so du
	//lay so du de dem


	int dao = 0;
	while (N > 0) {
		chu_so = N % 10; //lay so hang don vi
		dao = dao * 10 + chu_so; //dao vi tri len tren dau
		N /= 10; //loai bo so du, lay so nguyen de tiep tuc 
	}
	printf("%d", dao);


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
