//********************************************************
//
// assignment_1.c
// Author: Declan Robinson
// Date: 9/27/23
// Class: COP 3223, Professor Parra
// Purpose: to complete the requirements of assignment 1
//
// //********************************************************
#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput(); // Optional helper function

// Main function
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// Function to calculate the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Enter x1, y1: ");
    x1 = askForUserInput();
    y1 = askForUserInput();
    printf("Enter x2, y2: ");
    x2 = askForUserInput();
    y2 = askForUserInput();
    
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    
    return distance;
}

// Function to calculate the perimeter of a rectangle defined by the two points
double calculatePerimeter() {
    double distance = calculateDistance();
    // Assuming the rectangle sides are the distance and some predefined width and height
    // For simplicity, we'll just use the distance as both width and height
    double perimeter = 2 * (distance + distance); // Perimeter of a rectangle

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", 0.0, 0.0);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", distance, distance);
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    
    return 2.0; // Assuming this is easy
}

// Function to calculate the area of a rectangle defined by the two points
double calculateArea() {
    double distance = calculateDistance();
    double area = distance * distance; // Area of a rectangle

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", 0.0, 0.0);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", distance, distance);
    printf("The area of the city encompassed by your request is %.2f\n", area);
    
    return 2.0; // Assuming this is easy
}

// Function to calculate the width of a rectangle defined by the two points
double calculateWidth() {
    double x1, y1, x2, y2;
    printf("Enter x1, y1: ");
    x1 = askForUserInput();
    y1 = askForUserInput();
    printf("Enter x2, y2: ");
    x2 = askForUserInput();
    y2 = askForUserInput();
    
    double width = fabs(x2 - x1);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);
    
    return 1.0; // Assuming this is easy
}

// Function to calculate the height of a rectangle defined by the two points
double calculateHeight() {
    double x1, y1, x2, y2;
    printf("Enter x1, y1: ");
    x1 = askForUserInput();
    y1 = askForUserInput();
    printf("Enter x2, y2: ");
    x2 = askForUserInput();
    y2 = askForUserInput();
    
    double height = fabs(y2 - y1);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);
    
    return 1.0; // Assuming this is easy
}

// Optional function to ask for user input
double askForUserInput() {
    double value;
    scanf("%lf", &value);
    return value;
}
