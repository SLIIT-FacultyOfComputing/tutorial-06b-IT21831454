#include "Box.h"

// Implement setters and getters
void Box::setWidth(int w)
{
  width = w;
}
void Box::setLength(int l)
{
  length = l;
}
void Box::setHeight(int h)
{
  height = h;
}
int Box::getWidth()
{
  return width;
}
int Box::getLength()
{
  return length;
}
int Box::getHeight()
{
  return heigth;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  
  retrun heigth * length * width;
}
