#include "TXLib.h"
void drawChelPosleSmerti();
void drawKostyaLoh();
int main()
{
  txCreateWindow(1680, 1050);
  txSetFillColour(TX_WHITE);
  drawChelPosleSmerti();
  drawKostyaLoh();



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

void drawKostyaLoh()
{
txLine(100, 600, 100, 700);
txLine(200, 600, 200, 700);
txLine(100, 600, 200 ,600);
txLine(100, 600, 100, 500);
txLine(200, 600, 200, 500);
txArc(100, 400, 200, 500, 45, 360);
txLine(100, 500, 130, 495);
txLine(200, 500, 170, 495);
txLine(100, 510, 70, 600);
txLine(200, 510, 230, 600);
txCircle(125, 445, 15);
txCircle(175, 445, 15);
txLine(130, 485, 140, 480);
txLine(140, 480, 160, 480);
txLine(160, 480, 170, 485);
txLine(150, 600, 150, 610);
}
