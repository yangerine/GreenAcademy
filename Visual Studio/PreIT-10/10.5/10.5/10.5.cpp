// 10.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void nhap_chuoi(char s[], unsigned int size) {
	printf("Nhap chuoi: ");
	gets_s(s, size );
}

void xuat_chuoi(char s[]) {
	printf("Chuoi gom: %s\n\n", s);
}

int kiem_tra(char s[], unsigned int size,char a) {
	for (int i = 0; i < size; i++) 
	{
		if (a == s[i])
		{
			return 1;
		}
	}

	return 0;
}

int main()
{
	char s1[100];
	char s2[100];

	nhap_chuoi(s1, (unsigned int)sizeof(s1));
	nhap_chuoi(s2, (unsigned int)sizeof(s2));

	printf("\n");

	xuat_chuoi(s1);
	xuat_chuoi(s2);

	int length_s1 = strlen(s1);
	int length_s2 = strlen(s2);

	//so sanh do dai 2 chuoi
	//lay chuoi ngan hon de duyet mang
	//chuoi dai la tham so trong ham kiem_tra
	//tham so con lai la phan tu ky tu trong chuoi ngan
	if (length_s1 < length_s2) {
		for (int i = 0; i < length_s1; i++) {
			if (kiem_tra(s2, length_s2, s1[i]) == 1)
			{
				printf(" %c ", s1[i]);
			}
			
		}
		printf("\n");
	}

	else {
		for (int i = 0; i < length_s2; i++) {
			if (kiem_tra(s1, length_s1, s2[i]) == 1)
			{
				printf("\n %c \n", s2[i]);
			}

		}
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
