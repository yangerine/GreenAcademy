// 10.9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char s[100];
char domain[] = "@greenacademy.edu.vn";

char ten[100];
char ho_va_ten_lot[100];


void lower_case(char s[], int length) {
	//doi tat ca ve in thuong
	for (int i = 0; i < length; i++) {
		if (s[i] >= 'A')
		{
			s[i] = tolower(s[i]);
		}
	}
}

void tach_ho_ten(char s[], int length, char ten[], char ho_va_ten_lot[]) {

	int cut_pos = -1;

	//duyet tu phai sang trai de lay ten sau khoang space

	for (int i = length - 1; i >= 0; i--) {
		if (isspace(s[i]) != 0) {
			cut_pos = i; //tim thay khoang trang dau tien tu phai sang thi stop
			break;
		}
	}

	if (cut_pos == -1) {
		//truong hop chi dien moi ten
		strcpy_s(ten,100, s);
		ho_va_ten_lot[0] = '\0';
	}
	else
	{
		//copy phan ten
		strcpy_s(ten, 100, &s[cut_pos + 1]);

		//copy phan ho va ten lot
		strncpy_s(ho_va_ten_lot, 100, s, cut_pos); //luu y dung strncpy
		ho_va_ten_lot[cut_pos] = '\0';
	}
}

//tao ham viet tat (lay cac chu cai dau tien)
void viet_tat(char ho_lot[], char viet_tat[]) {
	int length = strlen(ho_lot);
	int k = 0;

	if (length == 0) {
		viet_tat[0] = '\0';
		return;
	}

	//lay ky tu dau
	viet_tat[k++] = ho_lot[0];

	//lay ky tu sau moi khoang space
	for (int i = 1 ; i < length; i++) {
		if (isspace(ho_lot[i-1]) && !isspace(ho_lot[i]) ) {
			viet_tat[k++] = ho_lot[i];
		}
	}
	
	viet_tat[k] = '\0';
}

//tao ho va ten lot viet lien
void viet_lien(char ho_va_ten_lot[], char ket_qua_viet_lien[]) {
	int k = 0;
	int length = strlen(ho_va_ten_lot);

	for (int i = 0; i < length; i++)
	{
		if (!isspace(ho_va_ten_lot[i])) {
			ket_qua_viet_lien[k++] = ho_va_ten_lot[i];
		}
	}
	ket_qua_viet_lien[k] = '\0';
}

int main()
{
	printf("Nhap ho va ten: ");
	gets_s(s, (unsigned int)sizeof(s));
	int length = strlen(s);

	lower_case(s, length);
	tach_ho_ten(s, length, ten, ho_va_ten_lot);

	//tao email: ten.ho_va_ten_lot@greenacademy.edu.vn
	char ho_ten_lot_lien[100] = "";
	char email1[200] = "";

	viet_lien(ho_va_ten_lot, ho_ten_lot_lien);

	strcat_s(email1,200, ten);
	strcat_s(email1, 200, ".");
	strcat_s(email1, 200, ho_ten_lot_lien);
	strcat_s(email1, 200, domain);
	

	printf("\nEmail: %s", email1);

	//noi yeucau 2
	char ten_tat[100] = "";
	viet_tat(ho_va_ten_lot, ten_tat);

	char email2[200] = "";

	viet_tat(ho_va_ten_lot, ten_tat);
	strcat_s(email2, 200, ten);
	strcat_s(email2, 200, ".");
	strcat_s(email2, 200, ten_tat);
	strcat_s(email2, 200, domain);

	printf("\n\nEmail 2: %s", email2);


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
