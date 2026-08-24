// 6.15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	//cbi 5 cau hoi do vui
	//ycau nhap dap an
	//dap an dung thi +10d
	//neu nhap sai thì nhap lai, moi lan nhap sai -1d
	//sau 5 cau thi tong ket diem

	char dap_an;
	bool dung = true;
	bool sai = false;
	
	int tong_diem = 0;

	printf("Nhap dap an dung (A,B,C,D) theo cac cau hoi.\n");

	//cau 1
	printf("1. 1 + 1 = ?\n");
	printf("A.1    B.2    C.3    D.4\n");
	printf("Nhap dap an: \n");
	scanf_s(" %c", &dap_an);

	while (dap_an != 'B') {
		printf("Dap an sai.\n");
		printf("Nhap lai dap an: \n");
		scanf_s(" %c", &dap_an);
		tong_diem -= 1;
	}

	if (dap_an == 'B')
		tong_diem += 10;

	//cau 2
	printf("2. Con nhen co may chan?\n");
	printf("A.2    B.9    C.6    D.8\n");
	printf("Nhap dap an: \n");
	scanf_s(" %c", &dap_an);

	while (dap_an != 'D') {
		printf("Dap an sai.\n");
		printf("Nhap lai dap an: \n");
		scanf_s(" %c", &dap_an);
		tong_diem -= 1;
	}

	if (dap_an == 'D')
		tong_diem += 10;

	//cau 3
	printf("3. Cau vong co bao nhieu mau?\n");
	printf("A.7    B.1    C.10    D.4\n");
	printf("Nhap dap an: \n");
	scanf_s(" %c", &dap_an);

	while (dap_an != 'A') {
		printf("Dap an sai.\n");
		printf("Nhap lai dap an: \n");
		scanf_s(" %c", &dap_an);
		tong_diem -= 1;
	}

	if (dap_an == 'A')
		tong_diem += 10;

	//cau 4
	printf("4. Mot thang co bao nhieu ngay?\n");
	printf("A.31    B.30    C.28    D.29\n");
	printf("Nhap dap an: \n");
	scanf_s(" %c", &dap_an);

	while (dap_an != 'C') {
		printf("Dap an sai.\n");
		printf("Nhap lai dap an: \n");
		scanf_s(" %c", &dap_an);
		tong_diem -= 1;
	}

	if (dap_an == 'C')
		tong_diem += 10;

	//cau 5
	printf("5. Final Fantasy la game the loai gi?\n");
	printf("A.FPS    B.RPG    C.Life-sim    D.Strategy\n");
	printf("Nhap dap an: \n");
	scanf_s(" %c", &dap_an);

	while (dap_an != 'B') {
		printf("Dap an sai.\n");
		printf("Nhap lai dap an: \n");
		scanf_s(" %c", &dap_an);
		tong_diem -= 1;
	}

	if (dap_an == 'B')
		tong_diem += 10;

	printf("Tong diem cua ban la: %d diem", tong_diem);
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
