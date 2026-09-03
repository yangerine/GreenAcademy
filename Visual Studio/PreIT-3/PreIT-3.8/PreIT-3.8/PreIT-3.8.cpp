// PreIT-3.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>


int main()
{
    int hour;
    int minute;
    int second;

    printf("Input hour:");
    scanf_s("%d", &hour);

    printf("Input minute:");
    scanf_s("%d", &minute);

    printf("Input second:");
    scanf_s("%d", &second);

    int hour_to_second = hour * 3600;
    int minute_to_second = minute * 60;
    int exchange = hour_to_second + minute_to_second + second;

    printf("Thoi gian da nhap: %d gio %d phut %d giay \n", hour, minute, second);
    printf("Tong so giay: %d giay", exchange);
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
