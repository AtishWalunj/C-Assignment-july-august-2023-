#include <iostream>
#include "Point.h"
#include "Line.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Eclipse.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	cout<<"welcome to Paintbrush";
	Point pt1;
	pt1.Display();
	
	Point startPoint(23,43);
	Point endPoint(55,55);
	int thickness=3;
	Line l1(startPoint, endPoint, thickness);

	
	
	Point startPoint2(12,10);
	Point endPoint2(56,155);
	int thickness2=4;
	Line l2(startPoint2, endPoint2, thickness2);
	
	l1.Display();
	l2.Display();
	
	Rectangle r(12,23);
	r.Display();
Square s(5);
s.Display();

Circle c(4);
c.Display();

Eclipse e(3.4,5.6);
e.Display();

	return 0;
}
