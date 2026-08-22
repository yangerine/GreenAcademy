// 6.11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	//danh gia do phuc tap cua giai thuat
	//xet xem chtring viet ra giai thuat nao tot hon
	//

	int a, b;

	printf("Nhap so a: \n");
	scanf_s("%d", &a);

	printf("Nhap so b: \n");
	scanf_s("%d", &b);

	a = abs(a);
	b = abs(b);

	int goc_a = a;
	int goc_b = b;

	//a>b -> a-b=c
	//c<b -> b-c=d
	//repeat until ket_qua = so_be = x
	// x = uoc so lon nhat cua 2 so max(a*b)


	while (a != b)
	{
		if (a < b)
			b = b - a;
		else if (a > b)
			a = a - b;
	}

	//kiem tra =0
	if (a == 0)
		printf("Uoc chung la %d \n", b);
	else if (b == 0)
		printf("Uoc chung la %d \n", a);

	printf("%d la uoc so lon nhat cua %d va % d \n", a, goc_a, goc_b);


	
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
