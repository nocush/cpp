#ifndef FIGURE_H_INCLUDED
#define FIGURE_H_INCLUDED
class Figure
{
private:
float area;
float l;
public:
Figure();
virtual ~Figure();
 float getArea();
 void setArea(float area1);
 float getL();
 void setL(float l1);
 virtual void calculateArea() = 0;
 virtual void calculateL() = 0;
 void show();
 };
 #endif // FIGURE_H_INCLUDED
