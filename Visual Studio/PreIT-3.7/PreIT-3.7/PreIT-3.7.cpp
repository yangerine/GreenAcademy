// PreIT-3.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string>

int main()
{
    char tensp[100];
    int so_luong;
    int don_gia;
    
    printf("Nhap ten san pham: ");
    fgets(tensp, sizeof(tensp), stdin );

    printf("So luong: ");
    scanf_s("%d", &so_luong);

    printf("Don gia: ");
    scanf_s("%d", &don_gia);

    int tien = so_luong * don_gia;
    double thue = (double)tien * 10 / 100;
    double tong = tien + thue;

    printf("Hoa don cua quy khach \n");
    printf("Ten san pham: %s \n", tensp);
    printf("So luong: %d \n", so_luong);
    printf("Don gia: %d \n", don_gia);
    printf("Tong tien cua %d %s: %f ", so_luong, tensp, tong);

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
