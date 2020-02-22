#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double width = atoi(argv[1]);
    double height = atoi(argv[2]);
    double perimeter;
    double area;

    perimeter = 2*width + 2*height;
    area = width * height;


    printf("Height of the rectangle is: %f\n", height);
    printf("Width of the rectangle is: %f\n", width);
    printf("Perimeter of the rectangle is: %f\n", perimeter);
    printf("Area of the rectangle is: %f\n", area);

    return 0;
}
