// PreIT-4.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    int sl_casette, sl_video, sl_VCD;

    //nhap so luong cac loai bang
    printf("Nhap so luong Bang Casette: \n");
    scanf_s("%d", &sl_casette);

    printf("Nhap so luong Bang tu Video: \n");
    scanf_s("%d", &sl_video);

    printf("Nhap so luong Bang VCD: \n");
    scanf_s("%d", &sl_VCD);

    //tinh tien
    int tong_casette = sl_casette * 1000;
    int tong_video = sl_video * 5000;
    int tong_vcd = sl_VCD * 10000;

    int tong = tong_casette + tong_vcd + tong_video;

    //tinh phi dat coc
    int coc_casette = (sl_casette > 0) ? 10000 : 0;
    int coc_video = (sl_video > 0) ? 50000 : 0;
    int coc_vcd = (sl_VCD > 0) ? 1000000 : 0;

    int tong_coc = coc_casette + coc_vcd + coc_video;

    //thoi gian thue
    double thue_casette = sl_casette * 0.5;
    double thue_video = sl_video * 3;
    double thue_vcd = sl_VCD * 5;

    double tong_tgian_thue = thue_casette + thue_vcd + thue_video;


    //tong tien
    int phai_tra = tong + tong_coc;

    //in hoa don

    printf("       BIEN LAI THU TIEN THUE BANG DIA      \n");
    printf("============================================\n");
    printf("      Loai bang    So luong    Gia tien     \n");
    printf("   Bang Casette    %d          2000 VND     \n", sl_casette);
    printf("  Bang tu video    %d          5000 VND     \n", sl_video);
    printf("        Dia VCD    %d         30000 VND     \n", sl_VCD);
    printf("    Phi dat coc                  %d VND     \n", tong_coc);
    printf("============================================\n");
    printf("Tong so tien phai tra: %d \n", phai_tra);
    printf("Ban duoc thue trong thoi gian la: %.1f \n", tong_tgian_thue);

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
