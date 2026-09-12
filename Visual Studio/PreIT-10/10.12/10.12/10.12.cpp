// 10.12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define max 200

char email[max];
char password[max];
char confirm_password[max];

int email_validation(char email[]) {
	int length = strlen(email);
	bool hasAt = false;
	bool hasDot = false;

	for (int i = 0; i < length; i++) {
		if (email[i] == '@') {
			hasAt = true;
		}
		if (email[i] == '.') {
			hasDot = true;
		}
	}

	if (hasAt && hasDot)
		return 1;
	else
	{
		return 0;

	}
	
}

int password_validation(char password[]) {
	//it nhat 8 ky tu
	//co  ky tu thuong, in hoa, dac biet?

	int length = strlen(password);
	bool thuong = false;
	bool in_hoa = false;
	bool dac_biet = false;
	bool so = false;

	if (length < 8)
		return 0;

	for (int i = 0; i < length; i++) {
		
			if (islower(password[i]))
				thuong = true;
			if (isupper(password[i]))
				in_hoa = true;
			if (!isspace(password[i]))
				dac_biet = true;
			if (isdigit(password[i]))
				so = true;
		
	}

	if (thuong && in_hoa && dac_biet && so)
		return 1;
	else
		return 0;
}

int confrim_validation(char password[], char confirm_password[]) {
	if (strcmp(password, confirm_password) == 0) {
		return 1;
	}
	return 0;

}


int main()
{
	printf("Nhap email: ");
	gets_s(email, (unsigned int)sizeof(email));

	

	if (email_validation(email) == 0) {
		do {
			printf("\nEmail chua hop le!\nVui long nhap lai email: ");
			gets_s(email, (unsigned int)sizeof(email));

		} while (email_validation(email) == 0);
	}

	bool is_registed = false;

	while (!is_registed) {
		printf("\nNhap password: ");
		gets_s(password, (unsigned int)sizeof(password));

		int length = strlen(password);

		if (password_validation(password) == 0) {
			do {
				printf("\nPassword chua hop le!\nVui long nhap lai password: ");
				gets_s(password, (unsigned int)sizeof(password));

			} while (email_validation(email) == 0);
		}



		printf("\nConfirm password: ");
		gets_s(confirm_password, (unsigned int)sizeof(confirm_password));

		if (confrim_validation(password, confirm_password) == 0) {
			printf("\nConfirm password khong khop! Vui long nhap lai password.");
		}
		else {
			is_registed = true;
		}
	}
	
	printf("\nRegisted Successful!");

	
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
