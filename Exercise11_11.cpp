/*
(Geometry: find the bounding rectangle) A bounding rectangle is the minimum
rectangle that encloses a set of points in a two-dimensional plane, as shown in
Figure 11.9d. Write a function that returns a bounding rectangle for a set of
points in a two-dimensional plane, as follows:
const int SIZE = 2;
Rectangle2D getRectangle(const double points[][SIZE]);
The Rectangle2D class is defined in Programming Exercise 11.9. Write a test
program that prompts the user to enter five points and displays the bounding
rectangle’s center, width, and height. Here is a sample run:
Enter five points: 1.0 2.5 3 4 5 6 7 8 9 10
The bounding rectangle's center (5.0, 6.25), width 8.0, height 7.5
*/

#include <iostream>
using namespace std;

// Rectangle2D class definition
class Rectangle2D{
private:
    double x, y; // Center coordinates
    double width, height;

public:
    // Constructor
    Rectangle2D(double centerX, double centerY, double w, double h) : x(centerX), y(centerY), width(w), height(h) {}
    
    // Getters
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
};

// Function to calculate the bounding rectangle
Rectangle2D getRectangle(const double points[][2]){
    double minX = points[0][0];
    double maxX = points[0][0];
    double minY = points[0][1];
    double maxY = points[0][1];

    // Find mi and max coordinates
    for(int i = 1; i < 5; i++){
        if(points[i][0] < minX)
            minX = points[i][0];
        if(points[i][0] > maxX)
            maxX = points[i][0];
        if(points[i][1] < minY)
            minY = points[i][1];
        if(points[i][1] > maxY)
            maxY = points[i][1];
    }

    // Calculate center, width, and height of the bounding rectangle
    double centerX = (minX + maxX) / 2.0;
    double centerY = (minY + maxY) / 2.0;
    double width = maxX - minX;
    double height = maxY - minY;

    // Create and return the Rectangle2D object
    return Rectangle2D(centerX, centerY, width, height);
}

int main(){
    const int SIZE = 2;
    double points[5][SIZE];

    // Prompt the user to enter five points
    cout << "Enter five points: ";
    for(int i = 0; i < 5; i++){
        cin >> points[i][0] >> points[i][1];
    }

    // Get the bounding rectangle
    Rectangle2D rect = getRectangle(points);

    // Display the bounding rectangle's center, width, and height
    cout << "The bounding rectangle's center (" << rect.getX() << ", " 
        << rect.getY() << "), width " << rect.getWidth() << ", height " << rect.getHeight() << endl;

    return 0;
}
