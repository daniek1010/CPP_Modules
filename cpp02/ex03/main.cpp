#include "Fixed.hpp"
#include "Point.hpp"

int main() {
    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(0.0f, 10.0f);

    // Points inside the triangle
    Point p1(1.0f, 1.0f); // Inside the triangle
    Point p2(2.0f, 2.0f); // Inside the triangle
    Point p3(3.0f, 3.0f); // Inside the triangle

    // Points on the edges of the triangle
    Point p4(5.0f, 0.0f); // On the edge
    Point p5(0.0f, 5.0f); // On the edge
    Point p6(5.0f, 5.0f); // On the edge

    // Points outside the triangle
    Point p7(10.0f, 10.0f); // Outside the triangle
    Point p8(-1.0f, -1.0f); // Outside the triangle
    Point p9(20.0f, 20.0f); // Outside the triangle

    std::cout << "Point p1 is " << (bsp(a, b, c, p1) ? "inside" : "outside") << " the triangle" << std::endl;
    std::cout << "Point p2 is " << (bsp(a, b, c, p2) ? "inside" : "outside") << " the triangle" << std::endl;
    std::cout << "Point p3 is " << (bsp(a, b, c, p3) ? "inside" : "outside") << " the triangle" << std::endl;

    std::cout << "Point p4 is " << (bsp(a, b, c, p4) ? "inside" : "outside") << " the triangle" << std::endl;
    std::cout << "Point p5 is " << (bsp(a, b, c, p5) ? "inside" : "outside") << " the triangle" << std::endl;
    std::cout << "Point p6 is " << (bsp(a, b, c, p6) ? "inside" : "outside") << " the triangle" << std::endl;

    std::cout << "Point p7 is " << (bsp(a, b, c, p7) ? "inside" : "outside") << " the triangle" << std::endl;
    std::cout << "Point p8 is " << (bsp(a, b, c, p8) ? "inside" : "outside") << " the triangle" << std::endl;
    std::cout << "Point p9 is " << (bsp(a, b, c, p9) ? "inside" : "outside") << " the triangle" << std::endl;

    return 0;
}