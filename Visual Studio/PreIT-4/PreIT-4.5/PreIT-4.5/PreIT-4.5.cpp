// PreIT-4.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    int og_a;
    int og_b;
    int og_c;
    int og_d;

    printf("Nhap so a: \n");
    scanf_s("%d", &og_a);
    
    printf("Nhap so b: \n");
    scanf_s("%d", &og_b);
    
    printf("Nhap so c: \n");
    scanf_s("%d", &og_c);
    
    printf("Nhap so d: \n");
    scanf_s("%d", &og_d);


    int a = og_a % 10;
    int b = og_b % 10;
    int c = og_c % 10;
    int d = og_d % 10;

    int so_nut = (a + b + c + d) % 10;
    printf("So nut cua so xe %d%d%d%d la: %d% \n", og_a, og_b, og_c, og_d, so_nut);
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
