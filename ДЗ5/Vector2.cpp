#include <iostream>
#include <cmath>
#include "Vector2.hpp"
using namespace std;

Vector2::Vector2(): x(0.0), y(0.0) {};
Vector2::Vector2(double _x, double _y): x(_x), y(_y) {};

void Vector2::setX(double _x){
    x = _x;
}

void Vector2::setY(double _y){
    y = _y;
}

double Vector2::getX(){
    return x;
}

double Vector2::getY(){
    return y;
}
//длина вектора
double Vector2::getLen(){
    return sqrt(x * x + y * y);
}
//нахождение угла
double Vector2::getAlfa(){
    return atan2(y, x);
    }
//сложение +
Vector2 Vector2::operator+(const Vector2& vector) const{
    return Vector2(x + vector.x, y + vector.y);
}
//умножение *
Vector2 Vector2::operator*(const double &a) const{
    return Vector2(x * a, y * a);
}

//перевод в пск
pair<double, double> Vector2::PSK(){
    return pair<double, double> (getLen(), getAlfa());
}
//вычитание -
Vector2 Vector2::operator-(const Vector2& vector) const{
    return Vector2(x - vector.x, y - vector.y);
}
//деление /
Vector2 Vector2::operator/(const double &a) const{
    return Vector2(x / a, y / a);
}
//умножение *=
void Vector2::operator*=(const double &a){
    x *= a;
    y *= a;
}
//деление /=
void Vector2::operator/=(const double &a){
    x /= a;
    y /= a;
}
//сравнение ==
bool Vector2::operator==(const Vector2& vector){
     return (x == vector.x && y == vector.y);
}
//сравнение !=
bool Vector2::operator!=(const Vector2& vector){
    return (x != vector.x && y != vector.y);
}
//косое скалярное произведение
double Vector2::KSP(const Vector2& vector){
    if(x == 0 && y == 0 || vector.x == 0 && vector.y == 0) return 0;
    else return (x * vector.y - y * vector.x);
}
//нормализация вектора
Vector2 Vector2::Norma(){
    return Vector2(x / sqrt(x * x + y * y), y / sqrt(x * x + y * y));
}
//косинусное расстояние
double Vector2::KR(const Vector2& vector){
    return ((x * vector.x + y * vector.y) /(sqrt(x * x + y * y) * sqrt(vector.x * vector.x + vector.y * vector.y)));
}
