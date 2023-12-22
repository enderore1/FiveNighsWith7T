#include "TXLib.h"
int main()
{
  txCreateWindow(1600, 800);
  txSetFillColour(TX_WHITE);
  txLine(100, 100, 250, 100);
  txLine(100, 100, 100, 250);
  txLine(100, 250, 250, 250);
  txLine(250, 250, 250, 100);
  txCircle(200, 150, 20);
  txCircle(150, 150, 20);

 

}
