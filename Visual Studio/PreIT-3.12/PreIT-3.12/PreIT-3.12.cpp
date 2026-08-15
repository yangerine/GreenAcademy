// PreIT-3.12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main()
{
    //Hien thi cac so le tu 1 toi N

    int N;
    int i = 1;

    printf("Nhap gia tri cua N:\n");
    scanf_s("%d", &N);

    if (N <= 0) {
        printf("N phai la so nguyen duong.");
    } 

    while (i < N) {
        if (i % 2 != 0) { //hien thi so le
            printf("%d", i);
        }
        i++;
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
