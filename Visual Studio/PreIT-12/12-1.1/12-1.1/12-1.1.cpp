// 12-1.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char name1[50];
char family_name1[50];

char name2[50];
char family_name2[50];

void name_input(char name[]) {
	printf("Nhap ten: ");
	gets_s(name, 50);
}

void family_name_input(char family_name[]) {
	printf("\nNhap ho: ");
	gets_s(family_name, 50);
}

int main()
{
	name_input(name1);
	family_name_input(family_name1);

	name_input(name2);
	family_name_input(family_name2);

	FILE* f;
	char link[200] = "C:\\Users\\pc\\Documents\\Git Fork\\GreenAcademy\\textfile1.txt";

	fopen_s(&f, link, "w");

	fprintf(f, "Tu: %s %s\n", family_name2, name2);
	fprintf(f, "Den: %s %s\n\n", family_name1, name1);
	fprintf(f, "Than goi %s %s!\n\n", family_name1, name1);
	fprintf(f, "Nhan dip sinh nhat cua %s, cho phep %s goi den %s nhung loi chuc tot dep nhat ve suc khoe, hanh phuc va thanh cong trong moi linh vuc. Goi loi tham suc khoe hai bac cua %s.\n\n", name1, name2, name1, name1);
	fprintf(f, "Ban cua %s, %s %s\n\n", name1, family_name2, name2);
	fprintf(f, "Tai but: Ba ma %s thuong nhac den %s.\n", name2, name1);

	fclose(f);

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
