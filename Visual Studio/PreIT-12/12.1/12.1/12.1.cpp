// 12.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#define MAX 50

//Khai báo struct 
struct Student
{
	char Name[200];
	float Literature;
	float Maths;
	float English;
};

void InputStudents(Student stds[], int& number);
void ReadTextFile(Student stds[], int number);
void WriteTextFile(Student stds[], int number);
void OutputList(Student stds[], int number);

void main()
{
	//Mảng chứa thông tin nhập từ người dùng và lưu trữ vào file 
	Student InputClass[MAX];
	//Mảng lưu trữ thông tin đọc được từ file 
	Student OutputClass[MAX];
	//Số lượng SV nhập từ người dùng có giá trị không quá MAX. 
	int Number;
	printf("InputStudents\n");
	InputStudents(InputClass, Number);
	printf("WriteTextFile\n");
	WriteTextFile(InputClass, Number);
	printf("ReadTextFile\n");
	ReadTextFile(OutputClass, Number);
	printf("OutputList\n");
	OutputList(OutputClass, Number);
	printf("\ndone");
	getchar();

}

//Xây dựng hàm nhập thông tin sinh viên 
void InputStudents(Student stds[], int& number)
{
	printf("Moi nhap so luong SV : ");
	scanf_s("%d", &number);
	for (int i = 0; i < number; i++)
	{
		printf("Nhap sinh vien thu %d\n", i + 1);
		rewind(stdin); //Lệnh xoá bộ nhớ đệm, tránh tình trạng lệnh bị trôi. 
		printf("Ho ten : "); 
		gets_s(stds[i].Name);
		printf("Diem Van : "); scanf_s(" %f", &stds[i].Literature);
		printf("Diem Toan : "); scanf_s(" %f", &stds[i].Maths);
		printf("Diem Anh : "); scanf_s(" %f", &stds[i].English);
	}
}

//Xây dựng hàm ghi thông tin từng sinh viên vào tập tin văn bản 
void WriteTextFile(Student stds[], int number)
{
	FILE* f;
	char link[200] = "C:\\Users\\pc\\Documents\\Git Fork\\GreenAcademy\\StudentList.txt";

	fopen_s(&f, link, "w");
	for (int i = 0; i < number; i++) {
		fprintf(f,"%s\n", stds[i].Name, f);
		fprintf(f,"%f\n", stds[i].Literature);
		fprintf(f,"%f\n", stds[i].Maths);
		fprintf(f,"%f\n", stds[i].English);
	}

	fclose(f);
}

//Xây dựng hàm đọc thông tin sinh viên từ tập tin văn bản và lưu trữ vào mảng 
void ReadTextFile(Student stds[], int number)
{
	FILE* f;
	char link[200] = "C:\\Users\\pc\\Documents\\Git Fork\\GreenAcademy\\StudentList.txt";
	fopen_s(&f, link, "r");

	for (int i = 0; i < number; i++) {
		
		fgets(stds[i].Name, 200, f);
		
		fscanf_s(f, "%f", &stds[i].Literature);
		fscanf_s(f, "%f", &stds[i].Maths);
		fscanf_s(f, "%f", &stds[i].English);
		/*printf("\nname: %s ", stds[i].Name);
		printf("\nliterature: %s ", literature);
		printf("\nmath: %s ", math);
		printf("\nenglish: %s ", english);*/

	}

	fclose(f);
}

//Xây dựng hàm hiển thị thông tin tất cả sinh viên đã đọc từ file đang lưu trữ trong mảng 
void OutputList(Student stds[], int number)
{
	printf("\nDANH SACH SINH VIEN\n");
	for (int i = 0; i < number; i++) {
		printf("\nHo ten sinh vien: %s ", stds[i].Name);
		printf("\nDiem Van: %.1f", stds[i].Literature);
		printf("\nDiem Toan: %.1f", stds[i].Maths);
		printf("\nDiem Anh: %.1f", stds[i].English);
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
