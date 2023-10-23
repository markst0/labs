#include <iostream>
#include <cmath>
#include "point.h"
#include "Triangle.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    // ������� ������ �����������
    Triangle triangle(3, 4, 5, 90, 45, 45);

    // ������� ���� ������ ������������
    cout << "������� 1: " << triangle.getSide1() << endl;
    cout << "������� 2: " << triangle.getSide2() << endl;
    cout << "������� 3: " << triangle.getSide3() << endl;


    // ��������� � ������� ������� � �������� ������������
    cout << "�������: " << triangle.calculateArea() << endl;
    cout << "��������: " << triangle.calculatePerimeter() << endl;

    // ��������� � ������� ������ ������������
    cout << "������ 1: " << triangle.calculateHeight1() << endl;
    cout << "������ 2: " << triangle.calculateHeight2() << endl;
    cout << "������ 3: " << triangle.calculateHeight3() << endl;

    // ���������� � ������� ��� ������������
    cout << "��� ������������: " << triangle.determineType();
};