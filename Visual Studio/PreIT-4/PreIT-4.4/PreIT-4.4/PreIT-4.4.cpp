// PreIT-4.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdio.h>
#include <math.h>

int main()
{
    double x;

    printf("Nhap gia tri cua x: \n");
    scanf_s("%f", &x);

    //tinh gia tri bieu thuc: 3x^3 -5x^2 +6

    double result = 3 * pow(x, 3) - 5 * pow(x, 2) + 6;

    printf("Ket qua cua phuong trinh 3x^3 -5x^2 +6 la: %.2f \n", result);
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
