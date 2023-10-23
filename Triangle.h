#include <iostream>
#include <cmath>
#include "point.h"

using namespace std;

class Triangle {
private:
    Point p1;
    Point p2;
    Point p3;

public:
    Triangle(double x1, double y1, double x2, double y2, double x3, double y3);

    double getSide1() const;
    double getSide2() const;
    double getSide3() const;

    void setPoint1(double x1, double y1);
    void setPoint2(double x2, double y2);
    void setPoint3(double x3, double y3);


    double calculateArea() const;
    double calculatePerimeter() const;

    double calculateHeight1() const;
    double calculateHeight2() const;
    double calculateHeight3() const;

    string determineType() const;
};