//! @file    FNW7_Lib.h
//! @brief   ���������� ����������.
//!
//!          $Version: 001a, Revision: 1 $
//!          $Copyright: (C) mashavadim2010@gmail.com $
#include "TXLib.h"
#ifndef FNW7_LIB_H_INCLUDED
#define FNW7_LIB_H_INCLUDED

//! @brief  �����
//!
//! @param   x       X - ���������� �����
//! @param   y       Y - ���������� �����
//! @param  COLORREF color       color - ���� �����
//! @param   sizeX       sizeX - ������ ����� �� ����������� X
//! @param   sizeY       sizeY - ������ ����� �� ����������� Y
//! @code
//!   Jalilova(500, 500, TX_WHITE, 1, 1);  // ������ �����
//! @endcode
void Jalilova(int x, int y, COLORREF color, double sizeX, double sizeY)
{
    txSetColor(color);
    txSetFillColour(TX_BLACK);
    // 800, 500
    txCircle(x + (800 - 800) * sizeX, y + (500 - 500) * sizeY, 50); // ����

    txLine(x + (840 - 800) * sizeX, y + (450 - 500), x + (810 - 800) * sizeX, y + (470 - 500) * sizeY);
    txLine(x + (840 - 800) * sizeX, y + (450 - 500), x + (820 - 800) * sizeX, y + (475 - 500) * sizeY); // ������ ������
    txLine(x + (840 - 800) * sizeX, y + (450 - 500), x + (815 - 800) * sizeX, y + (472 - 500) * sizeY);
    txLine(x + (840 - 800) * sizeX, y + (450 - 500), x + (825 - 800) * sizeX, y + (469 - 500) * sizeY);

    txCircle(x + (820 - 800) * sizeX, y + (485 - 500) * sizeY, 10);
    txCircle(x + (780 - 800) * sizeX, y + (485 - 500) * sizeY, 10); // �������
    txCircle(x + (780 - 800) * sizeX, y + (485 - 500) * sizeY, 2);
    txCircle(x + (820 - 800) * sizeX, y + (485 - 500) * sizeY, 2);



    txLine(x + (800 - 800) * sizeX, y + (550 - 500) * sizeY, x + (750 - 800) * sizeX, y + (600 - 500) * sizeY); // ����� �����
    txLine(x + (800 - 800) * sizeX, y + (550 - 500) * sizeY, x + (850 - 800) * sizeX, y + (600 - 500) * sizeY); // ����� ������

    txLine(x + (750 - 800) * sizeX, y + (600 - 500) * sizeY, x + (650 - 800) * sizeX, y + (650 - 500) * sizeY); // ���� �����
    txLine(x + (850 - 800) * sizeX, y + (600 - 500) * sizeY, x + (950 - 800) * sizeX, y + (650 - 500) * sizeY); // ���� �����

    txLine(x + (950 - 800) * sizeX, y + (650 - 500) * sizeY, x + (960 - 800) * sizeX, y + (660 - 500) * sizeY); // ����
    txCircle(x + (950 - 800) * sizeX, y + (650 - 500) * sizeY, 5);
    txLine(x + (960 - 800) * sizeX, y + (660 - 500) * sizeY, x + (960 - 800) * sizeX, y + (665 - 500) * sizeY);
    txLine(x + (960 - 800) * sizeX, y + (665 - 500) * sizeY, x + (950 - 800) * sizeX, y + (670 - 500) * sizeY);


    txLine(x + (750 - 800) * sizeX, y + (600 - 500) * sizeY, x + (750 - 800) * sizeX, y + (750 - 500) * sizeY); // ��� �����
    txLine(x + (850 - 800) * sizeX, y + (600 - 500) * sizeY, x + (850 - 800) * sizeX, y + (750 - 500) * sizeY); // ��� ������
    txLine(x + (850 - 800) * sizeX, y + (750 - 500) * sizeY, x + (750 - 800) * sizeX, y + (750 - 500) * sizeY); // ��� �������
    txLine(x + (850 - 800) * sizeX, y + (750 - 500) * sizeY, x + (850 - 800) * sizeX, y + (850 - 500) * sizeY); // ���� �����
    txLine(x + (750 - 800) * sizeX, y + (750 - 500) * sizeY, x + (750 - 800) * sizeX, y + (850 - 500) * sizeY); // ���� ������
}

//! @brief  ��� ����� ������
//!
//! @param   x       X - ���������� ���� ����� ������
//! @param   y       Y - ���������� ���� ����� ������
//! @param   sizeX       sizeX - ������ ���� �� ����������� X
//! @param   sizeY       sizeY - ������ ���� �� ����������� Y
//! @param  COLORREF color       color - ���� ���� ����� ������
//! @code
//!   drawChelPosleSmerti(200, 400, TX_WHITE, 1, 1);  // ������ ���� ����� ������
//! @endcode
void drawChelPosleSmerti(int x, int y, COLORREF color, double sizeX, double sizeY)
{
  txSetColor(color);
  txLine(x + (100 - 150) * sizeX , y + (100 - 150) * sizeY, x + (250 - 150) * sizeX, y + (100 - 150) * sizeY);
  txLine(x + (100 - 150) * sizeX, y + (100 - 150) * sizeY, x + (100 - 150) * sizeX, y + (250 - 150) * sizeY);
  txLine(x + (100 - 150) * sizeX, y + (250 - 150) * sizeY, x + (250 - 150) * sizeX, y + (250 - 150) * sizeY);
  txLine(x + (250 - 150) * sizeX, y + (250 - 150) * sizeY, x + (250 - 150) * sizeX, y + (100 - 150) * sizeY);
  txCircle(x + (200 - 150)  * sizeX, y + (150 - 150) * sizeY, 20);
  txCircle(x + (150 - 150) * sizeX, y + (150 - 150) * sizeY, 20);
}

//! @brief  �����
//!
//! @param   x       X - ���������� �����
//! @param   y       Y - ���������� �����
//! @param   sizeX       sizeX - ������ ����� �� ����������� X
//! @param   sizeY       sizeY - ������ ����� �� ����������� Y
//! @code
//!   drawKostyaLoh(500, 500, 1, 1);  // ������ �����
//! @endcode
void drawKostyaLoh(int x, int y, double sizeX, double sizeY)
{
    //100, 600
txLine(x + (100 - 100) * sizeX, y + (600 - 600) * sizeY, x + (100 - 100) * sizeX, y + (700 - 600) * sizeY);
txLine(x + (200 - 100) * sizeX, y + (600 - 600) * sizeY, x + (200 - 100) * sizeX, y + (700 - 600) * sizeY);
txLine(x + (100 - 100) * sizeX, y + (600 - 600) * sizeY, x + (200 - 100) * sizeX, y + (600 - 600) * sizeY);
txLine(x + (100 - 100) * sizeX, y + (600 - 600) * sizeY, x + (100 - 100) * sizeX, y + (500 - 600) * sizeY);
txLine(x + (200 - 100) * sizeX, y + (600 - 600) * sizeY, x + (200 - 100) * sizeX, y + (500 - 600) * sizeY);
txArc(x + (100 - 100) * sizeX, y + (400 - 600) * sizeY, x + (200 - 100) * sizeX, y + (500 - 600) * sizeY, 45, 360);
txLine(x + (100 - 100) * sizeX, y + (500 - 600) * sizeY, x + (130 - 100) * sizeX, y + (495 - 600) * sizeY);
txLine(x + (200 - 100) * sizeX, y + (500 - 600) * sizeY, x + (170 - 100) * sizeX, y + (495 - 600) * sizeY);
txLine(x + (100 - 100) * sizeX, y + (510 - 600) * sizeY, x + (70 - 100) * sizeX, y + (600 - 600) * sizeY);
txLine(x + (200 - 100) * sizeX, y + (510 - 600) * sizeY, x + (230 - 100) * sizeX, y + (600 - 600) * sizeY);
txCircle(x + (125 - 100) * sizeX, y + (445 - 600) * sizeY, 15);
txCircle(x + (175 - 100) * sizeX, y + (445 - 600) * sizeY, 15);
txLine(x + (130 - 100) * sizeX, y + (485 - 600) * sizeY, x + (140 - 100) * sizeX, y + (480 - 600) * sizeY);
txLine(x + (140 - 100) * sizeX, y + (480 - 600) * sizeY, x + (160 - 100) * sizeX, y + (480 - 600) * sizeY);
txLine(x + (160 - 100) * sizeX, y + (480 - 600) * sizeY, x + (170 - 100) * sizeX, y + (485 - 600) * sizeY);
txLine(x + (150 - 100) * sizeX, y + (600 - 600) * sizeY, x + (150 - 100) * sizeX, y + (610 - 600) * sizeY);
}

//! @brief  ���
//!
//! @code
//!   Background();
//! @endcode
void Background()
{
    txSetFillColour(TX_BLACK);
    txLine(500, 1000, 600, 950);
    txLine(600, 950, 1150, 950);
    txLine(850, 950, 1150, 950);
    txLine(1150, 950, 1000, 1000);
    txLine(1000, 1000, 500, 1000);
    txLine(500, 1000, 500, 1050);//
    txLine(1000, 1000, 1000, 1050);
    txLine(1150, 950, 1150, 1050);

    txSetFillColour(TX_BLACK);
    txRectangle (500, 700, 1200, 300);

    txSetFillColour(TX_BLACK);
    txCircle(850, 200, 50);
    txTextOut(825, 180, "�������");
    txTextOut(815, 195, "����������");

    txLine(840, 1, 840, 15);
    txLine(840, 15, 800, 30);
    txLine(800, 30, 880, 30);
    txLine(880, 30, 840, 15);
    txLine(820, 35, 860, 35);

    txLine(820, 45, 800, 65);
    txLine(840, 45, 840, 65);
    txLine(860, 45, 880, 65);

    txRectangle(1350, 300, 1680, 700);
    txLine(1550, 300, 1550, 700);

    txRectangle(350, 300, 1, 700);
    txLine(100, 300, 100, 700);

    txLine(1350, 433, 1650, 433);
    txLine(1350, 566, 1650, 566);

    txLine(350, 433, 1, 433);
    txLine(350, 566, 1, 566);

    txSetFillColour(TX_BLACK);
    txSetColor(TX_BLACK);
    txRectangle(500, 702, 1200, 699);
    txSetColor(TX_WHITE);
    txSetFillColour(TX_BLACK);
}


#endif // FNW7_LIB_H_INCLUDED
