// 8.9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int nhap_so_nguyen() {//khong can truyen vao tham so
    int n;
    printf("Nhap so nguyen: ");
    scanf_s("%d", &n);

    if (n < 0) {
        n *= -1;
    }
    return n;
}

int tim_UCLN(int a, int b) {

   
    while (b != 0) {
        int so_du = a % b; //lay so du
        a = b; 
        b = so_du;
    }
    return a; //khi b=0 thi a la UCLN
}

int main()
{
    int a, b;

    a = nhap_so_nguyen();
    b = nhap_so_nguyen();

    if (a == 0 && b == 0) {
        printf("\nHai so 0 khong co Uoc chung lon nhat!\n ");
    }
    else
    {
        printf("\nUoc chung lon nhat cua %d va %d la: %d", a, b, tim_UCLN(a, b));
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
