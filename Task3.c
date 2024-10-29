#include <stdio.h>

int add_int(int int1, int int2);
float add_flo(float f1, float f2);
float circle_area(float r);
int rec_area(int l, int w);
int factorial(int n);

int main() {
    int calc;

    printf("Choose the operation you would like to perform:\n");
    printf("1. addition of two integers int1 and int2.\n");
    printf("2. addition of two floating point numbers f1 and f2.\n");
    printf("3. calculating the area of a circle of radius r.\n");
    printf("4. calculating the area of a rectangle of length l and width w.\n");
    printf("5. finding the factorial of a given number n.\n");
    printf("Enter a number 1 - 5: ");
    scanf("%d", &calc);

    switch (calc) {
        case 1: {
            int int1, int2;
            printf("Enter int1: ");
            scanf("%d", &int1);
            printf("Enter int2: ");
            scanf("%d", &int2);

            int add = add_int(int1, int2);
            printf("%d + %d = %d\n", int1, int2, add);

            break;
        }

        case 2: {
            float f1, f2;
            printf("Enter f1: ");
            scanf("%f", &f1);
            printf("Enter f2: ");
            scanf("%f", &f2);

            float sum = add_flo(f1, f2);
            printf("%f + %f = %f\n", f1, f2, sum);

            break;
        }

        case 3: {
            float r;
            printf("Enter a value for the radius to calculate the area: ");
            scanf("%f", &r);

            float area = circle_area(r);
            printf("Area of circle with radius %f = %f\n", r, area);

            break;
        }

        case 4: {
            int l, w;
            printf("Enter the length l: ");
            scanf("%d", &l);
            printf("Enter the width w: ");
            scanf("%d", &w);

            int area_rec = rec_area(l, w);
            printf("The area of the rectangle with l = %d and w = %d is %d\n", l, w, area_rec);

            break;
        }

        case 5: {
            int n;
            printf("Enter a non-negative number: ");
            scanf("%d", &n);

            int fact = factorial(n);
            printf("The factorial of %d is %d\n", n, fact);

            break;
        }

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}

int add_int(int int1, int int2) {
    return int1 + int2;
}

float add_flo(float f1, float f2) {
    return f1 + f2;
}

float circle_area(float r) {
    const float PI = 3.14;
    return PI * r * r;
}

int rec_area(int l, int w) {
    return l * w;
}

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

