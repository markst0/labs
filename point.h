#include <iostream>
#include <cmath>

class Point {
private:
    double x, y;

public:
    Point(double x, double y);
    Point();

    void moveX(double dx);
    void moveY(double dy);

    double distanceToOrigin();
    double distanceToPoint(Point other) const;

    void toPolar(double& radius, double& angle);

    bool operator==(Point other);
    bool operator!=(Point other);
};
