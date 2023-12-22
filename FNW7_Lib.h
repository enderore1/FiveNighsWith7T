//! @file    FNW7_Lib.h
//! @brief   Библиотека персонажей.
//!
//!          $Version: 001a, Revision: 1 $
//!          $Copyright: (C) mashavadim2010@gmail.com $
#include "TXLib.h"
#ifndef FNW7_LIB_H_INCLUDED
#define FNW7_LIB_H_INCLUDED

//! @brief  Фокси
//!
//! @param   x       X - координата Фокси
//! @param   y       Y - координата Фокси
//! @param  COLORREF color       color - цвет Фокси
//! @param   sizeX       sizeX - размер Фокси по координатам X
//! @param   sizeY       sizeY - размер Фокси по координатам Y
//! @code
//!   Jalilova(500, 500, TX_WHITE, 1, 1);  // Рисует фокси
//! @endcode
void Jalilova(int x, int y, COLORREF color, double sizeX, double sizeY)
{
    txSetColor(color);
    txSetFillColour(TX_BLACK);
    // 800, 500
    txCircle(x + (800 - 800) * sizeX, y + (500 - 500) * sizeY, 50); // лицо

    txLine(x + (840 - 800) * sizeX, y + (450 - 500), x + (810 - 800) * sizeX, y + (470 - 500) * sizeY);
    txLine(x + (840 - 800) * sizeX, y + (450 - 500), x + (820 - 800) * sizeX, y + (475 - 500) * sizeY); // глазик открыт
    txLine(x + (840 - 800) * sizeX, y + (450 - 500), x + (815 - 800) * sizeX, y + (472 - 500) * sizeY);
    txLine(x + (840 - 800) * sizeX, y + (450 - 500), x + (825 - 800) * sizeX, y + (469 - 500) * sizeY);

    txCircle(x + (820 - 800) * sizeX, y + (485 - 500) * sizeY, 10);
    txCircle(x + (780 - 800) * sizeX, y + (485 - 500) * sizeY, 10); // глазики
    txCircle(x + (780 - 800) * sizeX, y + (485 - 500) * sizeY, 2);
    txCircle(x + (820 - 800) * sizeX, y + (485 - 500) * sizeY, 2);



    txLine(x + (800 - 800) * sizeX, y + (550 - 500) * sizeY, x + (750 - 800) * sizeX, y + (600 - 500) * sizeY); // плечо левое
    txLine(x + (800 - 800) * sizeX, y + (550 - 500) * sizeY, x + (850 - 800) * sizeX, y + (600 - 500) * sizeY); // плечо правое

    txLine(x + (750 - 800) * sizeX, y + (600 - 500) * sizeY, x + (650 - 800) * sizeX, y + (650 - 500) * sizeY); // рука левое
    txLine(x + (850 - 800) * sizeX, y + (600 - 500) * sizeY, x + (950 - 800) * sizeX, y + (650 - 500) * sizeY); // рука левое

    txLine(x + (950 - 800) * sizeX, y + (650 - 500) * sizeY, x + (960 - 800) * sizeX, y + (660 - 500) * sizeY); // крюк
    txCircle(x + (950 - 800) * sizeX, y + (650 - 500) * sizeY, 5);
    txLine(x + (960 - 800) * sizeX, y + (660 - 500) * sizeY, x + (960 - 800) * sizeX, y + (665 - 500) * sizeY);
    txLine(x + (960 - 800) * sizeX, y + (665 - 500) * sizeY, x + (950 - 800) * sizeX, y + (670 - 500) * sizeY);


    txLine(x + (750 - 800) * sizeX, y + (600 - 500) * sizeY, x + (750 - 800) * sizeX, y + (750 - 500) * sizeY); // бок левый
    txLine(x + (850 - 800) * sizeX, y + (600 - 500) * sizeY, x + (850 - 800) * sizeX, y + (750 - 500) * sizeY); // бок правый
    txLine(x + (850 - 800) * sizeX, y + (750 - 500) * sizeY, x + (750 - 800) * sizeX, y + (750 - 500) * sizeY); // пол корпуса
    txLine(x + (850 - 800) * sizeX, y + (750 - 500) * sizeY, x + (850 - 800) * sizeX, y + (850 - 500) * sizeY); // нога левая
    txLine(x + (750 - 800) * sizeX, y + (750 - 500) * sizeY, x + (750 - 800) * sizeX, y + (850 - 500) * sizeY); // нога правая
}

//! @brief  Чел после смерти
//!
//! @param   x       X - координата Чела после смерти
//! @param   y       Y - координата Чела после смерти
//! @param   sizeX       sizeX - размер чела по координатам X
//! @param   sizeY       sizeY - размер чела по координатам Y
//! @param  COLORREF color       color - цвет Чела после смерти
//! @code
//!   drawChelPosleSmerti(200, 400, TX_WHITE, 1, 1);  // Рисует Чела после смерти
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
