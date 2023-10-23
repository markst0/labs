#include "point.h"
#include "Triangle.h"

using namespace std;

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

Point::Point() {
    x = y = 0;
}
    
// ����������� ����� �� ��� X 
void Point::moveX(double dx) {
    x += dx;
}
    
// ����������� ����� �� ��� Y    
void Point::moveY(double dy) {        
    y += dy;    
}
    
// ����������� ���������� �� ������ ���������  
double Point::distanceToOrigin() {        
    return sqrt(x * x + y * y);    
}
    
// ����������� ���������� ����� ����� �������   
double Point::distanceToPoint(Point other) const {        
    double dx = x - other.x;       
    double dy = y - other.y;    
    return sqrt(dx * dx + dy * dy);
}
 
// �������������� � �������� ����������
void Point::toPolar(double& radius, double& angle) {
    radius = distanceToOrigin();
    angle = atan2(y, x);
}
    
// ��������� �� ����������/������������
bool Point::operator==(Point other) {
    return x == other.x && y == other.y;
}

bool Point::operator!=(Point other) {        
    return x != other.x || y != other.y;   
}
