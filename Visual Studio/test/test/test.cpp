// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main()
{
    //how to use switch syntax 
    int day_of_week;

    printf("Enter day of the week: \n");
    scanf_s("%d", &day_of_week);

    switch (day_of_week) {
        case 1: { printf("Sunday"); } break;
        case 2: { printf("Monday"); } break;
        case 3: { printf("Tuesday"); } break;
        case 4: { printf("Wenesday"); } break;
        case 5: { printf("Thursday"); } break;
        case 6: { printf("Friday"); } break;
        case 7: { printf("Saturday"); } break;
        default : { printf("Wrong day"); } break; //press any button
    
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
