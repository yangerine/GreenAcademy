// 12-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char company_name[100];
char intern_name[100];
char university[100];
char major[100];

struct date
{
	int day;
	int month;
	int year;
};

date d_y_m[3];

int main()
{
	printf("\n===Input your information===\n");
	
	printf("Input your name: ");
	gets_s(intern_name);

	printf("Input company name: ");
	gets_s(company_name);

	printf("Input university name: ");
	gets_s(university);

	printf("Input your major: ");
	gets_s(major);

	d_y_m[0].month = 24;
	d_y_m[1] = { 1, 8, 2019 };
	d_y_m[2] = { 20, 7, 2019 };

	FILE* f;
	char link[] = "D:\\D\\Green Academy\\GreenAcademy\\file12-2.txt";

	fopen_s(&f, link, "w");

	fprintf(f, "\n       CONG HOA XA HOI CHU NGHIA VIET NAM       \n");
	fprintf(f, "            Doc lap - Tu do - Hanh Phuc\n");
	fprintf(f, "                       ======\n");
	fprintf(f, "                  DON XIN THUC TAP\n");
	fprintf(f, "Kinh gui: %s. \n", company_name);
	fprintf(f, "Toi ten la: %s.\n", intern_name);
	fprintf(f, "Hien toi dang la sinh vien cua truong: %s, chuyen nganh: %s.\n", 
		university, major);
	fprintf(f, "Kih xin quy co quan cho toi duoc thap tap tai cong ty trong thoi gian %d thang, bat\ndau tu ngay %02d/%02d/%d.\n", 
		d_y_m[0].month, d_y_m[1].day, d_y_m[1].month, d_y_m[1].year);
	fprintf(f, "Trong qua trinh thuc tap toi xin cam doan se thua hien dung noi quy cong ty.\n\n");
	fprintf(f, "Toi xin chan thanh cam on.\n");
	fprintf(f, "TPHCM, ngay %d thang %02d nam %d\n\n", d_y_m[2].day, d_y_m[2].month, d_y_m[2].year);
	fprintf(f, "%s\n", intern_name);

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
