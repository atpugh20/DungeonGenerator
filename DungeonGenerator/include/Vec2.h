#pragma once

#include <cmath>
#include <iostream>

class Vec2 {
private:
    float x, y;

public:
    Vec2(float x, float y);
    ~Vec2();

    bool operator==(const Vec2& other_vector) const;
    Vec2 operator+(const Vec2& other_vector);
    Vec2 operator-(const Vec2& other_vector);
    Vec2 operator*(const float& scalar);
    Vec2 operator/(const float& scalar);

    Vec2 Clone();

    float GetX() const;
    float GetY() const;
    float GetMag() const;

    void Print() const;
};
