#include "../include/GiftBox.h"

GiftBox::GiftBox(int x,int y):Box(x,y)
{
    giftTypeNum=rand()%4;


}

int GiftBox::giftType()
{
    return this->giftTypeNum;
  }


bool GiftBox::getDeadOrAlive()
{
    return this->deadOrAlive;
}

int GiftBox::getXPos()
{
    return this->xPos;
}

int GiftBox::getYPos()
{
    return this->yPos;
}
