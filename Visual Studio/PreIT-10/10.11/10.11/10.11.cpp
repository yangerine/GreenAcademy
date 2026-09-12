// 10.11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 200

char s[max];
int length;

void cat_chuoi(int vi_tri, int do_dai, char s[], char new_string[]) {
	length = strlen(s);
	int k = 0;

	if (vi_tri < 0 || vi_tri >= length) {
		new_string[0] = '\0'; //gan ky tu rong vao ký tu dau tien cua chuoi
		return;
	}

	for (int i = vi_tri; i < do_dai + vi_tri && i< length ;i++) {
		new_string[k++] = s[i];
	}

	new_string[k] = '\0';
	

}

int main()
{
	int vi_tri;
	int do_dai;
	char new_string[max];

	printf("Nhap chuoi ky tu:");
	gets_s(s, (unsigned int)sizeof(s));
	

	//cat chuoi voi vi tri va so luong ky tu muon cat
	//do user nhap

	printf("\nNhap vi tri muon cat: ");
	scanf_s("%d", &vi_tri);


	printf("\nNhap do dai muon cat: ");
	scanf_s("%d", &do_dai);

	cat_chuoi(vi_tri, do_dai, s, new_string);
	printf("\nChuoi ky tu da cat: %s", new_string);
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
