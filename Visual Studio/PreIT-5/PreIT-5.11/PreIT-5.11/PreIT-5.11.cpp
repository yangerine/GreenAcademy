// PreIT-5.11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	long int a, b, c;

	printf("Nhap so thu nhat: \n");
	scanf_s("%d", &a);

	printf("Nhap so thu hai: \n");
	scanf_s("%d", &b);

	printf("Nhap so thu ba: \n");
	scanf_s("%d", &c);

	bool isVuong = pow(a, 2) == pow(b, 2) + pow(c, 2)
				|| pow(b, 2) == pow(a, 2) + pow(c, 2)
				|| pow(c, 2) == pow(a, 2) + pow(b, 2);

	bool isCan = a == b || a == c || b == c;

	if (a + b > c || b+c > a || a + c > b) 
	{
		printf("Ba so %ld, %ld, %ld tao thanh mot tam giac.\n", a, b, c);

		if (a == b && a == c) 
		{
			printf("Tam giac deu.\n");
		}
		else if (isCan)
		{
			printf("Tam giac can.");

		}
		else if (isCan && isVuong == false)
		{
			printf("Tam giac vuong can.");
		}
		else if (isVuong && isCan == false)
		{
			printf("Tam giac vuong.\n");
		}
		else 
		{
			printf("Tam giac thuong.\n");
		}

	}
	else 
	{
		printf("Ba so %ld, %ld, %ld khong tao thanh mot tam giac.\n", a, b, c);
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
