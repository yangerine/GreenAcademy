// 6.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int N;
	int N_dau;
	bool soChan = true;

	printf("Nhap so N(>99): \n");
	scanf_s("%d", &N);

	if (N < 100)
		printf("N phai nhieu hon 2 chu so.\n");

	int so_du;
	N_dau = N;
	while (N > 0) {
		so_du = N % 10; //lay so nguyen cua ket qua lam so du
		
		if (so_du % 2 != 0) { //so sanh so du co chia het cho 2 khong
			soChan = false;
			break;
		}
		N = N / 10; //tiep tuc chia 10
	}
	if (soChan)
		printf("%d gom toan so chan.\n", N_dau);
	else
		printf("%d khong gom toan so chan.\n", N_dau);


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
