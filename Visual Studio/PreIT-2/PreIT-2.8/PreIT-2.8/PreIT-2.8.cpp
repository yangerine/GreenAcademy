// PreIT-2.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main()
{
    //Dem cac chu so co trong N

    int N;
    int dem = 0;

    printf("Nhap gia tri cua N:");
    scanf_s("%d", &N);

    if (N <= 0)
    {
        printf("N phai la so nguyen duong.");
    }
    else {
        while (N > 0) { //chia den khi N=0 vi khi chia den so thap phan thi lay gia tri 0
            N = N / 10;
            dem++;
        }
        printf("Gia tri dem: %d \n", dem);
    }

    /*int origialN = N;
    while (N > 0) {
        N = N / 10;
        dem++;

    printf("Gia tri dem: %d", dem);
    }*/
    

    
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
