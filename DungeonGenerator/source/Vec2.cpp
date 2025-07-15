#include "Vec2.h"

Vec2::Vec2(float x, float y) 
    : x(x), y(y) {}

Vec2::~Vec2() {}

bool Vec2::operator==(const Vec2& other_vector) const {
    return (x == other_vector.x && y == other_vector.y);
}

Vec2 Vec2::operator+(const Vec2& other_vector) {
    return Vec2(x + other_vector.x, y + other_vector.y);
}

Vec2 Vec2::operator-(const Vec2& other_vector) {
    return Vec2(x - other_vector.x, y - other_vector.y);
}

Vec2 Vec2::operator*(const float& scalar) {
    return Vec2(x * scalar, y * scalar);
}

Vec2 Vec2::operator/(const float& scalar) {
    float s = scalar;

    if (s == 0) {
        std::cout << "Cannot divide by 0!" << std::endl;
        s = 1;
    }

    return Vec2(x / s, y / s);
}
    
Vec2 Vec2::Clone() { return Vec2(x, y); }

float Vec2::GetX() const { return x; }
float Vec2::GetY() const { return y; }

float Vec2::GetMag() const {
    return std::sqrt(x * x + y * y);
}

void Vec2::Print() const {
    std::cout << '(' << x << ", " << y << ')';
}
