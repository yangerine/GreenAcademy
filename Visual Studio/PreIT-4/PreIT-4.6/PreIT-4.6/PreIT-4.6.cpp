// PreIT-4.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    //in ra man hinh so gio tuong ung
    int hour;
    int minute;
    int goc_second;
    int second;
    int tgian_du;

    printf("Nhap so giay: \n");
    scanf_s("%d", &goc_second);

    hour = goc_second / 3600;
    tgian_du = fmod(goc_second, 3600);
    minute = tgian_du / 60;
    second = fmod(tgian_du, 60);

    printf("Thoi gian doi tu %d sang la: %d gio %d phut %d giay \n", goc_second, hour, minute, second);
    

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
