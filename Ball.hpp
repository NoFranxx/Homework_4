#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"
#include "Color.hpp"

class Ball {
public:
    // Конструктор для создания шара
    Ball(const Point& center, const Velocity& velocity, const Color& color, double radius);
    
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;

private:
    Point center;      // Центр шара
    Velocity velocity; // Скорость шара
    Color color;       // Цвет шара
    double radius;     // Радиус шара
};