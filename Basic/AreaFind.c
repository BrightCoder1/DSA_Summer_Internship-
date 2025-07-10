#include <stdio.h>
#define PI 3.1416

int main()
{
    float length, breadth, radius, side, height, width;

    // Area of Rectangle
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    float areaRectangle = length * breadth;
    printf("Area of Rectangle = %.2f\n", areaRectangle);

    // Area of Circle
    printf("\nEnter radius of circle: ");
    scanf("%f", &radius);
    float areaCircle = PI * radius * radius;
    printf("Area of Circle = %.2f\n", areaCircle);

    // Surface Area of Cube
    printf("\nEnter side of cube: ");
    scanf("%f", &side);
    float areaCube = 6 * side * side;
    printf("Surface Area of Cube = %.2f\n", areaCube);

    // Surface Area of Cuboid
    printf("\nEnter length, width, and height of cuboid: ");
    scanf("%f %f %f", &length, &width, &height);
    float areaCuboid = 2 * (length * width + width * height + height * length);
    printf("Surface Area of Cuboid = %.2f\n", areaCuboid);

    return 0;
}
