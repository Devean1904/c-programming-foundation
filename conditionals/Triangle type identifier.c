#include <stdio.h>

int main() {
    int a, b, c, sum;

    printf("Enter three angles: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check for invalid angles
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Error: Angles must be positive.\n");
        return 0;
    }

    sum = a + b + c;

    // Sum validation
    if (sum > 360) {
        printf("Error: Sum of angles cannot be greater than 360.\n");
    }
    else if (sum != 180) {
        printf("Not a valid triangle.\n");
    }
    else {
        // Triangle type
        if (a == b && b == c) {
            printf("Equilateral triangle.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles triangle.\n");
        }
        else {
            printf("Scalene triangle.\n");
        }
    }

    return 0;
}

