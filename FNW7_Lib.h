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
    txCircle(800, 500, 50); // лицо

    txLine(840, 450, 810, 470);
    txLine(840, 450, 820, 475); // глазик открыт
    txLine(840, 450, 815, 472);
    txLine(840, 450, 825, 469);

    txCircle(820, 485, 10);
    txCircle(780, 485, 10); // глазики
    txCircle(780, 485, 2);
    txCircle(820, 485, 2);



    txLine(800, 550, 750, 600); // плечо левое
    txLine(800, 550, 850, 600); // плечо правое

    txLine(750, 600, 650, 650); // рука левое
    txLine(850, 600, 950, 650); // рука левое

    txLine(950, 650, 960, 660); // крюк
    txCircle(950, 650, 5);
    txLine(960, 660, 960, 665);
    txLine(960, 665, 950, 670);


    txLine(750, 600, 750, 750); // бок левый
    txLine(850, 600, 850, 750); // бок правый
    txLine(850, 750, 750, 750); // пол корпуса
    txLine(850, 750, 850, 850); // нога левая
    txLine(750, 750, 750, 850); // нога правая
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

  txLine(x + (100 - 150) * sizeX , y + (100 - 150) * sizeY, x + (250 - 150) * sizeX, y + (100 - 150) * sizeY);
  txLine(x + (100 - 150) * sizeX, y + (100 - 150) * sizeY, x + (100 - 150) * sizeX, y + (250 - 150) * sizeY);
  txLine(x + (100 - 150) * sizeX, y + (250 - 150) * sizeY, x + (250 - 150) * sizeX, y + (250 - 150) * sizeY);
  txLine(x + (250 - 150) * sizeX, y + (250 - 150) * sizeY, x + (250 - 150) * sizeX, y + (100 - 150) * sizeY);
  txCircle(x + (200 - 150)  * sizeX, y + (150 - 150) * sizeY, 20);
  txCircle(x + (150 - 150) * sizeX, y + (150 - 150) * sizeY, 20);
}

#endif // FNW7_LIB_H_INCLUDED
