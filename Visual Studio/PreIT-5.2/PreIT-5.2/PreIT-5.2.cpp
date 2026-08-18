// PreIT-5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    int so_nam;

    printf("Nhap so nam: \n");
    scanf_s("%d", &so_nam);

    if (so_nam <= 0) {
        printf("So nam khong hop le!");
    }
    else if (so_nam % 400 == 0 || so_nam % 4 == 0 && so_nam % 100 > 0) {
        printf("%d la nam nhuan.\n", so_nam);
    }
    else {
        printf("%d khong phai la nam nhuan.\n", so_nam);
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
