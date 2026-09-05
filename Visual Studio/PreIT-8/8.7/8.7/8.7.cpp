// 8.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>

const char* tinh_can(int nam_sinh) { //data type char* tra ve chuoi ky tu (string)
	int so_cuoi = nam_sinh % 10;
	switch(so_cuoi){
		case 0: return "Canh"; 
		case 1: return "Tan"; 
		case 2: return "Nham"; 
		case 3: return "Quy"; 
		case 4: return "Giap"; 
		case 5: return "At"; 
		case 6: return "Binh"; 
		case 7: return "Dinh"; 
		case 8: return "Mau"; 
		case 9: return "Ky"; 
	}
}

const char* tinh_chi(int nam_sinh) {
	int result = (nam_sinh - 1800) % 12;

	switch (result) {
	case 0: return "Than";
	case 1: return "Dau";
	case 2: return "Tuat";
	case 3: return "Hoi";
	case 4: return "Ti";
	case 5: return "Suu";
	case 6: return "Dan";
	case 7: return "Mao";
	case 8: return "Thin";
	case 9: return "Ty";
	case 10: return "Ngo";
	case 11: return "Mui";
	}
}

int main()
{
	int nam_sinh;
	
	printf("Nhap nam sinh: ");
	scanf_s("%d", &nam_sinh);

	printf("\nCan chi: %s %s \n", tinh_can(nam_sinh), tinh_chi(nam_sinh));


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
