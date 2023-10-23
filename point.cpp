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
    
// перемещение точки по оси X 
void Point::moveX(double dx) {
    x += dx;
}
    
// перемещение точки по оси Y    
void Point::moveY(double dy) {        
    y += dy;    
}
    
// определение расстояния до начала координат  
double Point::distanceToOrigin() {        
    return sqrt(x * x + y * y);    
}
    
// определение расстояния между двумя точками   
double Point::distanceToPoint(Point other) const {        
    double dx = x - other.x;       
    double dy = y - other.y;    
    return sqrt(dx * dx + dy * dy);
}
 
// преобразование в полярные координаты
void Point::toPolar(double& radius, double& angle) {
    radius = distanceToOrigin();
    angle = atan2(y, x);
}
    
// сравнение на совпадение/несовпадение
bool Point::operator==(Point other) {
    return x == other.x && y == other.y;
}

bool Point::operator!=(Point other) {        
    return x != other.x || y != other.y;   
}
