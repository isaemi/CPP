
/*
(Geometry: The Rectangle2D class) Define the Rectangle2D class that contains:
n Two double data fields named x and y that specify the center of the rectangle with constant get functions and set functions. (Assume that the rectangle
sides are parallel to x- or y-axes.)
n The double data fields width and height with constant get functions and
set functions.
n A no-arg constructor that creates a default rectangle with (0, 0) for (x, y) and 1
for both width and height.
n A constructor that creates a rectangle with the specified x, y, width, and
height.
n A constant function getArea() that returns the area of the rectangle.
n A constant function getPerimeter() that returns the perimeter of the rectangle.
n Aconstant function contains(double x, double y) that returns true if
the specified point (x, y) is inside this rectangle. See Figure 11.9a.
n A constant function contains(const Rectangle2D &r) that returns true
if the specified rectangle is inside this rectangle. See Figure 11.9b.
n A constant function overlaps(const Rectangle2D &r) that returns true
if the specified rectangle overlaps with this rectangle. 
(a) A point is inside the rectangle. (b) A rectangle is inside another rectangle.
(c) A rectangle overlaps another rectangle. (d) Points are enclosed inside a rectangle.

Draw the UML diagram for the class. Implement the class. Write a test program
that creates three Rectangle2D objects r1(2, 2, 5.5, 4.9), r2(4, 5,
10.5, 3.2)), and r3(3, 5, 2.3, 5.4), and displays r1’s area and perimeter,
and displays the result of r1.contains(3, 3), r1.contains(r2), and r1.
overlaps(r3)
*/

#include <iostream>
using namespace std; 

class Rectangle2D{
private:
    double x;
    double y;
    double width;
    double height;

public:
    Rectangle2D(){
        x = 0;
        y = 0;
        width = 1;
        height = 1;
    }

    Rectangle2D(double newX, double newY, double newWidth, double newHeight){
        x = newX;
        y = newY;
        width = newWidth;
        height = newHeight;
    }

    double getX() const{
        return x;
    }
    
    double getY() const{
        return y;
    }

    double getWidth() const{
        return width;
    }
    
    double getHeight() const{
        return height;
    }

    void setX(double newX){
        x = newX;
    }

    void setY(double newY){
        y = newY;
    }

    void setWidth(double newWidth){
        width = newWidth;
    }

    void setHeight(double newHeight){
        height = newHeight;
    }

    double getArea() const{
        return width * height;
    }

    double getPerimeter() const{
        return 2 * (width + height);
    }

    bool contains(double pointX, double pointY) const{
        double left = x - (width / 2);
        double right = x + (width /2);
        double top = y + (height / 2);
        double bottom = y - (height / 2);

        return (pointX >= left && pointX <= right && pointY <= top && pointY >= bottom);
    }

    bool contains(const Rectangle2D& r) const{
        double rLeft = r.x - (r.width / 2);
        double rRight = r.x + (r.width / 2);
        double rTop = r.y + (r.height / 2);
        double rBottom = r.y - (r.height / 2);

        double left = x - (width / 2);
        double right = x + (width /2);
        double top = y + (height / 2);
        double bottom = y - (height / 2);

        return (rLeft >= left && rRight <= right && rTop <= top && rBottom >= bottom);
    }

    bool overlaps(const Rectangle2D& r) const{
        double rLeft = r.x - (r.width / 2);
        double rRight = r.x + (r.width / 2);
        double rTop = r.y + (r.height / 2);
        double rBottom = r.y - (r.height / 2);

        double left = x - (width / 2);
        double right = x + (width /2);
        double top = y + (height / 2);
        double bottom = y - (height / 2);

        return !(rRight < left || rLeft > right || rBottom > top || rTop < bottom);
    }
};

int main(){
    Rectangle2D r1(2, 2, 5.5, 4.9);
    Rectangle2D r2(4, 5, 10.5, 3.2);
    Rectangle2D r3(3, 5, 2.3, 5.4);

    cout << "r1: x = " << r1.getX() << ", y = " << r1.getY() << ", width = " << r1.getWidth() << ", height = " << r1.getHeight() << endl;
    cout << "Area: " << r1.getArea() << endl;
    cout << "Perimeter: " << r1.getPerimeter() << endl;

    cout << "r1.contains(3, 3): " << (r1.contains(3, 3) ? "true" : "false") << endl;
    cout << "r1.contains(r2): " << (r1.overlaps(r3) ? "true" : "false") << endl;

    return 0;
}
