#include <iostream>
#include <cmath>
#include "point.h"
#include "Triangle.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    // Создаем объект треугольник
    Triangle triangle(3, 4, 5, 90, 45, 45);

    // Выводим поля данных треугольника
    cout << "Сторона 1: " << triangle.getSide1() << endl;
    cout << "Сторона 2: " << triangle.getSide2() << endl;
    cout << "Сторона 3: " << triangle.getSide3() << endl;


    // Вычисляем и выводим площадь и периметр треугольника
    cout << "Площадь: " << triangle.calculateArea() << endl;
    cout << "Периметр: " << triangle.calculatePerimeter() << endl;

    // Вычисляем и выводим высоты треугольника
    cout << "Высота 1: " << triangle.calculateHeight1() << endl;
    cout << "Высота 2: " << triangle.calculateHeight2() << endl;
    cout << "Высота 3: " << triangle.calculateHeight3() << endl;

    // Определяем и выводим вид треугольника
    cout << "Вид треугольника: " << triangle.determineType();
};