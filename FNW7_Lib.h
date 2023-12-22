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
    txCircle(800, 500, 50); // ����

    txLine(840, 450, 810, 470);
    txLine(840, 450, 820, 475); // ������ ������
    txLine(840, 450, 815, 472);
    txLine(840, 450, 825, 469);

    txCircle(820, 485, 10);
    txCircle(780, 485, 10); // �������
    txCircle(780, 485, 2);
    txCircle(820, 485, 2);



    txLine(800, 550, 750, 600); // ����� �����
    txLine(800, 550, 850, 600); // ����� ������

    txLine(750, 600, 650, 650); // ���� �����
    txLine(850, 600, 950, 650); // ���� �����

    txLine(950, 650, 960, 660); // ����
    txCircle(950, 650, 5);
    txLine(960, 660, 960, 665);
    txLine(960, 665, 950, 670);


    txLine(750, 600, 750, 750); // ��� �����
    txLine(850, 600, 850, 750); // ��� ������
    txLine(850, 750, 750, 750); // ��� �������
    txLine(850, 750, 850, 850); // ���� �����
    txLine(750, 750, 750, 850); // ���� ������
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

  txLine(x + (100 - 150) * sizeX , y + (100 - 150) * sizeY, x + (250 - 150) * sizeX, y + (100 - 150) * sizeY);
  txLine(x + (100 - 150) * sizeX, y + (100 - 150) * sizeY, x + (100 - 150) * sizeX, y + (250 - 150) * sizeY);
  txLine(x + (100 - 150) * sizeX, y + (250 - 150) * sizeY, x + (250 - 150) * sizeX, y + (250 - 150) * sizeY);
  txLine(x + (250 - 150) * sizeX, y + (250 - 150) * sizeY, x + (250 - 150) * sizeX, y + (100 - 150) * sizeY);
  txCircle(x + (200 - 150)  * sizeX, y + (150 - 150) * sizeY, 20);
  txCircle(x + (150 - 150) * sizeX, y + (150 - 150) * sizeY, 20);
}

#endif // FNW7_LIB_H_INCLUDED
