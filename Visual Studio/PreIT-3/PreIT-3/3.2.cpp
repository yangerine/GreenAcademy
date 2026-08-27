#include <stdio.h>

int main()
{
	int a;
	int b;

	printf("Enter A: \n");
	scanf_s("%d", &a);

	printf("Enter B: \n");
	scanf_s("%d", &b);

	int tong = a + b;
	int tich = a * b;
	int thuong = a / b;

	printf("Tong: %d \n Tich: %d \n Thuong: %d \n", tong, tich, thuong);

}