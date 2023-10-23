#include "point.h"
#include "Triangle.h"

using namespace std;

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3) {
    p1 = Point(x1, y1);
    p2 = Point(x2, y2);
    p3 = Point(x3, y3);
}

// Методы для получения полей данных
double Triangle::getSide1() const {
    return p1.distanceToPoint(p2);
}

double Triangle::getSide2() const {
    return p2.distanceToPoint(p3);
}

double Triangle::getSide3() const {
    return p3.distanceToPoint(p1);
}

// Методы для изменения полей данных
    
void Triangle::setPoint1(double x1, double y1) {
    p1 = Point(x1, y1);   
}

void Triangle::setPoint2(double x2, double y2) {
    p2 = Point(x2, y2);
}
    
void Triangle::setPoint3(double x3, double y3) {        
    p3 = Point(x3, y3);    
}

    
// Метод для вычисления площади
double Triangle::calculateArea() const {        
    double p = calculatePerimeter() / 2;    
    return sqrt(p * (p - getSide1()) * (p - getSide2()) * (p - getSide3()));
}

    
// Метод для вычисления периметра
double Triangle::calculatePerimeter() const {
    return getSide1() + getSide2() + getSide3();    
}

    
// Методы для вычисления высот
double Triangle::calculateHeight1() const {
    return 2 * calculateArea() / getSide1();    
}


double Triangle::calculateHeight2() const {
    return 2 * calculateArea() / getSide2();   
}

    
double Triangle::calculateHeight3() const {
    return 2 * calculateArea() / getSide3();    
}

    
// Метод для определения вида треугольника
string Triangle::determineType() const {
    if (getSide1() == getSide2() && getSide2() == getSide3()) {    
        return "Равносторонний";
    }   
    else if (getSide1() == getSide2() || getSide2() == getSide3() || getSide1() == getSide3()) {
        return "Равнобедренный";        
    }   
    else if (pow(getSide1(),2) + pow(getSide2(),2) == pow(getSide3(), 2) || pow(getSide2(), 2) + pow(getSide3(), 2) == pow(getSide1(), 2) || (pow(getSide1(), 2) + pow(getSide3(), 2) == pow(getSide2(), 2))){
        return "Прямоугольный";       
    }   
    else {
        return "Обычный";       
    }  
}
