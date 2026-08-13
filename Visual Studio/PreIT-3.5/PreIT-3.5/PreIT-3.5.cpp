// PreIT-3.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main()
{
    int h;
    int a;
    int b;
    int c;
    int d;

    printf("Nhap chieu cao: \n");
    scanf_s("%d", &h);

    printf("Nhap canh day a: \n");
    scanf_s("%d", &a);

    printf("Nhap canh day b: \n");
    scanf_s("%d", &b);

    printf("Nhap canh ben c: \n");
    scanf_s("%d", &c);

    printf("Nhap canh ben d: \n");
    scanf_s("%d", &d);

    float dien_tich = (float)(a + b) / 2 + h;
    int chu_vi = a + b + c + d;

    printf("Dien tich hinh thang: %f \n", dien_tich);
    printf("Chu vi hinh thang: %d \n", chu_vi);
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
