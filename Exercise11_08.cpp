/*
(Geometry: The Circle2D class) Define the Circle2D class that contains:
n Two double data fields named x and y that specify the center of the circle with
constant get functions.
n A double data field radius with a constant get function.
n A no-arg constructor that creates a default circle with (0, 0) for (x, y) and 1 for
radius.
n A constructor that creates a circle with the specified x, y, and radius.
n A constant function getArea() that returns the area of the circle.
n A constant function getPerimeter() that returns the perimeter of the circle.
n A constant function contains(double x, double y) that returns true if
the specified point (x, y) is inside this circle. See Figure 11.8a.
n A constant function contains(const Circle2D& circle) that returns
true if the specified circle is inside this circle. See Figure 11.8b.
n A constant function overlaps(const Circle2D& circle) that returns
true if the specified circle overlaps with this circle. See Figure 11.8c.

Draw the UML diagram for the class. Implement the class. Write a test program
that creates a Circle2D object c1(2, 2, 5.5), c2(2, 2, 5.5), and c3(4,
5, 10.5), displays c1’s area and perimeter, the result of c1.contains(3, 3),
c1.contains(c2), and c1.overlaps(c3).
*/

#include <iostream>
#include <cmath>
using namespace std;

class Circle2D{
private:
    double x, y;
    double radius;

public:
    Circle2D(){
        x = 0;
        y = 0;
        radius = 1;
    }

    Circle2D(double x, double y, double radius){
        this->x = x;
        this->y = y;
        this->radius = radius;

    }

    double getX() const{
        return x;
    }

    void setX(double x){
        this->x = x;
    }

    double getY() const{
        return y;
    }

    void setY(double y){
        this->y = y;
    }

    double getRadius() const{
        return radius;
    }

    void setRdius(double radius){
        this->radius = radius;
    }

    double getPerimeter() const{
        return 2 * radius * 3.14159;
    }

    double getArea() const{
        return radius * radius * 3.14159;
    }
    bool contains(double x, double y) const{
        return(abs(x - this->x) <= radius) && (abs(y - this->y) <= radius);
    }
    
    bool contains(const Circle2D &circle) const{
        return contains(circle.x - circle.radius, circle.y) && contains(circle.x + circle.radius, circle.y);
    }
    bool overlaps(const Circle2D &circle) const{
        // Two circles overlap if the distance between the two centers
        // are less than or equal to r1 + r2
        return distance(x, y, circle.x, circle.y) <= radius + circle.radius;
    }

    static double distance(double x1, double y1, double x2, double y2){
        return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    }
};



int main(){
    Circle2D c1(2, 2, 5.5);
    cout << "Area: " << c1.getArea() << endl;
    cout << "Perimeter: " <<c1.getPerimeter() << endl;

    cout << c1.contains(3,3) << endl;

    Circle2D c2(4, 5, 10.5);
    cout << c1.contains(c2) << endl;
    cout << c2.overlaps(c2) << endl;

    return 0;
}
