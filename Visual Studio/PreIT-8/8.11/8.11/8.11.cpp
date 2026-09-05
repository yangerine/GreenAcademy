// 8.11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>


//-1:vo nghiem; 0: vo so nghiem; 1: 1 nghiem kep; 2: 2 nghiem khac nhau
int giai_phuong_trinh(int a, int b, int c, float &x1, float &x2) {
	//xet truong hop phuong trinh bac nhat khi a = 0
	//bx + c = 0

	if (a == 0) 
	{
		if (b == 0) 
		{
			if (c == 0)
				return 0; //pt vo so nghiem
			else
				return -1; //pt vo nghiem
		}
		else
		{
			x1 = -c / b;
			x1 = x2;
			return 1; //nghiem kep
		}
	}
	
	//tinh pt 2 nghiem
	//tinh delta 
	int delta = pow(b, 2) - 4 * a * c;

	if (delta < 0) 
	{
		return -1;//pt vo nghiem
	}
	else if (delta == 0) 
	{
		x1 = -b / (2 * a);
		x1 = x2;
		return 1;//pt co nghiem kep
	}
	else if (delta > 0) 
	{
		x1 = (-b + sqrt(delta) / (2 * a));
		x2 = (-b - sqrt(delta) / (2 * a));
		return 2;
	}


}

int main()
{
	int a, b, c;
	float x1, x2;

	printf("Nhap he so a: ");
	scanf_s("%d", &a);

	printf("Nhap he so b: ");
	scanf_s("%d", &b);

	printf("Nhap he so c: ");
	scanf_s("%d", &c);

	int result = giai_phuong_trinh(a, b, c, x1, x2);
	printf("%dx^2 + %dx + %d = 0 co ket qua la:\n", a, b, c);

	switch (result) {
	case -1: 
		printf("Phuong trinh vo nghiem\n");
		break;
	case 0: 
		printf("Phuong trinh vo so nghiem\n");
		break;
	case 1:
		printf("Phuong trinh co 1 nghiem kep\n");
		printf("x1 = x2 = %.2f", x1);
		break;
	case 2: 
		printf("Phuong trinh co 2 nghiem khac nhau\n");
		printf("x1 = %.2f \n x2 = %.2f\n", x1, x2);
		break;
	default:
		printf("Phuong trinh khong ton tai!");
		break;
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
