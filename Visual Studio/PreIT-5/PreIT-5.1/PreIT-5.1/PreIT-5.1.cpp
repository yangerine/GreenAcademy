// PreIT-5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main()
{
    //nhiet do
    int temperature;

    printf("Nhap nhiet do cua nuoc: \n");
    scanf_s("%d", &temperature);

    if (temperature >= 100) {
        printf("Nuoc se soi o nhiet do 100 do C.\n");
    }
    else {
        printf("Nuoc chua du nhiet do de soi.\n");
    }

    //tiet kiem
    int saving;

    printf("Nhap so tien tiet kiem: \n");
    scanf_s("%ld", &saving);

    if (saving >= 40000000) {
        printf("Mua xe Airblade.\n");
    } else {
        printf("Chua du tien de mua xe Airblade.\n");
    }

    //ngay
    int answer;

    printf("Hom nay co phai thu bay, chu nhat, hay ngay le khong? (1: co/0: khong) \n");
    scanf_s("%d", &answer);


    if (answer == 1) {
        printf("Khong phai den truong.\n");
    } else if (answer == 0) {
        printf("Phai den truong.\n");
        }

    //so buoi
    int nghi_hoc;
    int di_tre;

    printf("Nhap so buoi nghi hoc: \n");
    scanf_s("%d", &nghi_hoc);

    printf("Nhap so buoi di tre: \n");
    scanf_s("%d", &di_tre);

    if (nghi_hoc >= 4 || nghi_hoc < 2 && di_tre > 4) {
        printf("Cam thi.\n");
    }
    else {
        printf("Duoc di thi.\n");
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
