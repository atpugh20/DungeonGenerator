#include "Application.h"

Application::Application() {
    // Constructor implementation
}

Application::~Application() {
    // Destructor implementation
}

void Application::Run() {
    Vec2 vec1(3.0f, 4.0f);
    Vec2 vec2(1.0f, 2.0f);
    Vec2 sum = vec1 + vec2;
    Vec2 diff = vec1 - vec2;
    Vec2 scaled = vec1 * 2.0f;
    Vec2 divided = vec1 / 2.0f;
    std::print("Vector 1: ");
    vec1.Print();
    std::print("\nVector 2: ");
    vec2.Print();
    std::print("\nSum: ");
    sum.Print();
    std::print("\nDifference: ");
    diff.Print();
    std::print("\nScaled Vector 1: ");
    scaled.Print();
    std::print("\nDivided Vector 1: ");
    divided.Print();
}