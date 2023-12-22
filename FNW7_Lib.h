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

#endif // FNW7_LIB_H_INCLUDED
