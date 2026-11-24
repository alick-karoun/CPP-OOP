
#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    Point() : x(0), y(0) {} // Default constructor
    Point(const int x, const int y) : x(x), y(y) {} //paramaterized constructor
    Point(const Point& that) : x(that.x), y(that.y) {} // Copy constructor
    ~Point() {}

    void setX(const int x) { this->x = x; }
    void setY(const int y) { this->y = y; }

    int getX() const { return x; }
    int getY() const { return y; }

    void display() const {
        std::cout << "(" << x << ", " << y << ")";
    }
};

void test(Point point){};

Point test2(){
    Point point(3,3);
    return point;
}


int main() {
    Point point0;
    Point point1(1, 2);
    Point point2 = point1;

    point0.display();
    std::cout << '\n';

    point1.display();
    std::cout << '\n';

    point2.display();
    std::cout << '\n';

    return 0;
}
