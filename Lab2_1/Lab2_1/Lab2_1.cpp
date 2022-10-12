#include <iostream>
#include "Figure.h"
#include "Square.h"
#include "Circle.h"
using namespace std;
int main()
{
Figure * f1 = new Square(5);
Figure * f2 = new Circle(3);
f1->calculateArea();
f1->calculateL();
f1->show();
f2->calculateArea();
f2->calculateL();
f2->show();
delete f1;
delete f2;
return 0;
}
