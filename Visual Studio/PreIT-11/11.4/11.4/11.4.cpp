// 11.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	struct bxh
	{
		char ma_bai_hat[7];
		char ten[100];
		int luot_nghe;
	};


	bxh song[50];

	int tong_so_bh;
	printf("Nhap tong so bai hat: ");
	scanf_s("%d", &tong_so_bh);
	

	for (int i = 0; i < tong_so_bh; i++) {
		rewind(stdin);
		printf("\nMa bai hat: ");
		gets_s(song[i].ma_bai_hat);

		printf("\nTen bai hat: ");
		gets_s(song[i].ten);
		

		printf("\nLuot nghe: ");
		scanf_s("%d", &song[i].luot_nghe);
		rewind(stdin);
	}

	//Tim bai hat co so luot nghe cao nhat
	int index_top = 0;

	for (int i = 0; i < tong_so_bh; i++) {
		if (song[i].luot_nghe > song[index_top].luot_nghe) {
			index_top = i;
		}
	}

	printf("\Ca khuc co luot nghe cao nhat: %s voi %d luot nghe", song[index_top].ten, song[index_top].luot_nghe);

	//Hien thi danh sach xep hang dua vao so luong nghe giam dan
	

	for (int i = 0; i < tong_so_bh-1; i++) {
		for (int j = i + 1; j < tong_so_bh; j++) {
			if (song[i].luot_nghe < song[j].luot_nghe) {
				bxh temp = song[i];
				song[i] = song[j];
				song[j] = temp;
			}

		}
	}

	printf("\n--BXH ca khuc theo so luot nghe giam dan--\n");
	for (int i = 0; i < tong_so_bh; i++) {
		printf("%d. %s - %d luot nghe\n", i+1, song[i].ten, song[i].luot_nghe);

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
