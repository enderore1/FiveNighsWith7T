#include "TXLib.h"
void drawChelPosleSmerti();
int main()
{
  txCreateWindow(1680, 1050);
  txSetFillColour(TX_WHITE);
  drawChelPosleSmerti();



  return 0;
}

void drawChelPosleSmerti()
{
txLine(100, 100, 250, 100);
  txLine(100, 100, 100, 250);
  txLine(100, 250, 250, 250);
  txLine(250, 250, 250, 100);
  txCircle(200, 150, 20);
  txCircle(150, 150, 20);
}
