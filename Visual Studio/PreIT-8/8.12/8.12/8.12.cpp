// 8.12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int kiem_tra_toan_chan(int n) 
{
	while (n > 0) {
		int chu_so = n % 10;
		if (chu_so % 2 != 0) //xet co so le khong
			return 0;//co so le thi ngay lap tuc stop loop
		n /= 10;
	}
	return 1;//neu khong co so le thi la so chan
}

int kiem_tra_tang_dan(int n) {
	//kiem tra cac so tu trai qua phai xem co sx theo thu tu tang dan khong

	int chu_so_truoc = -1; //dat bien bang -1 dung de so sanh cho so hang don vi

	while (n > 0) 
	{
		int chu_so_hien_tai = n % 10;

		if (chu_so_truoc != -1) //o vong lap 1 dk nay auto false va chuyen xuong dk duoi
		{
			if (chu_so_truoc <= chu_so_hien_tai) 
			{
				return 0;
			}
		}

		else 
		{
			//tat ca so hang don vi luon >-1 nen 
			//vong lap nay dung de gan gia tri cho bien chu so truoc 
			//de so sanh voi cac so tiep theo
			chu_so_truoc = chu_so_hien_tai; 
		}

		n = n / 10;
	}

	return 1;
}

void dem_so_chan_le(int n, int& dem_chan, int& dem_le) {
	while (n > 0) 
	{
		int chu_so = n % 10;
		if (chu_so % 2 != 0)
			dem_le++;
		if (chu_so % 2 == 0)
			dem_chan++;

		n /= 10;
	}

}


int main()
{
	int n;
	int dem_chan;
	int dem_le;

	printf("Nhap so nguyen lon hon 2 chu so: ");
	scanf_s("%d", &n);

	if (n < 100 || n < 0) {
		do
		{
			printf("So nguyen khong phu hop!\nNhap lai so nguyen: ");
			scanf_s("%d", &n);
		} while (n < 100 || n < 0);
	}

	if (kiem_tra_toan_chan(n) == 1)
		printf("So cua ban la so chua toan ky tu chan.\n");
	else if (kiem_tra_toan_chan(n) == 0)
		printf("So cua ban co chua ky tu le.\n");

	if (kiem_tra_tang_dan(n) == 1)
		printf("So %d la so co cac ky tu tang dan.\n", n);
	else if (kiem_tra_tang_dan(n) == 0)
		printf("So %d la so khong co cac ky tu tang dan.\n", n);

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
