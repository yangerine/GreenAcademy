// PreIT-2.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main()
{
    float listening;
    printf("Diem Listening: \n");
    scanf_s("%f", &listening);

    float reading;
    printf("Diem Reading: \n");
    scanf_s("%f", &reading);

    float speaking;
    printf("Diem Speaking: \n");
    scanf_s("%f", &speaking);

    float writing;
    printf("Diem Writing: \n");
    scanf_s("%f", &writing);

    float BTD = (listening + reading + speaking + writing) / 4;

    if (BTD > 4.5) {
        printf("DAU\n");
    }
    else {
        printf("ROT\n");
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
