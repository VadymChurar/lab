#include <stdio.h>
#include <math.h>

//Finding the length of a segment
double segmentLength(double x1, double y1, double x2, double y2) {
    return sqrt(pow((x2 - x1),2)+ pow((y2 - y1),2));
}

double triangleValidate(double a, double b, double c) {
    if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0) {
        return 1;
    } else {
        return 0;
    }
}

void triangleType(double a, double b, double c) {
    if (a == b && b == c && c == a) {
        printf("Equilateral triangle");
    } else if (a == b || a == c || b == c) {
        printf("Triangle Isosceles");
    } else {
        printf("Triangle Versatile");
    }
}

int main() {
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    //Enter the first point
    printf("Enter a\n");
    printf("Enter x1:");
    scanf("%lf", &x1);
    printf("Enter y1:");
    scanf("%lf", &y1);
    printf("Enter x2:");
    scanf("%lf", &x2);
    printf("Enter y2:");
    scanf("%lf", &y2);

    double a = segmentLength(x1, y1, x2, y2);
    //Enter second point
    printf("Enter b\n");
    printf("Enter x1:");
    scanf("%lf", &x1);
    printf("Enter y1:");
    scanf("%lf", &y1);
    printf("Enter x2:");
    scanf("%lf", &x2);
    printf("Enter y2:");
    scanf("%lf", &y2);


    double b = segmentLength(x1, y1, x2, y2);
    //Enter third point
    printf("Enter c\n");
    printf("Enter x1:");
    scanf("%lf", &x1);
    printf("Enter y1:");
    scanf("%lf", &y1);
    printf("Enter x2:");
    scanf("%lf", &x2);
    printf("Enter y2:");
    scanf("%lf", &y2);

    double c = segmentLength(x1, y1, x2, y2);

    if (triangleValidate(a, b, c) != 1) {
        printf("Triangle does not exist");
        return 0;
    }

    triangleType(a, b, c);
    return 0;
}
