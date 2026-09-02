// 7.13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#define max 100

int a[max];
int n;
int x;

void nhap_mang(int a[], int& n) {
    for (int i = 0; i < n; i++) {
        printf("\nPhan tu %d: ", i);
        scanf_s("%d", &a[i]);
    }
}

void xuat_mang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int find_erase(int a[], int &n, int x) {
    int dem = 0; //dem so lan x xuat hien trong mang

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {

            //sau khi tim ra x thi lui tung phan tu mot ve ben trai
            //dung vong lap moi
            for (int j = i; j < n - 1; j++) { 
                a[j] = a[j + 1];
            }
            i--;
            n--;
            dem++;
        }
    }

    if (dem == 0)
        return -1;

    return dem;
}


int main()
{
    printf("Nhap so luong cua mang: ");
    scanf_s("%d", &n);

    nhap_mang(a, n);

    printf("\nNhap gia tri x: ");
    scanf_s("%d", &x);

    find_erase(a, n, x);
    xuat_mang(a, n);
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
