#include <stdio.h>
#include <math.h>

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);


    if (number <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    double square_root = sqrt(number);


    if (floor(square_root) == square_root) {
        printf("The closest integer with a whole number square root is: %d\n", (int)square_root);
    } else {

        int closest_integer = round(square_root);

        if (number - (closest_integer * closest_integer) < (closest_integer + 1) * (closest_integer + 1) - number) {
            printf("The closest integer with a whole number square root is: %d\n", closest_integer);
        } else {
            printf("The closest integer with a whole number square root is: %d\n", closest_integer + 1);
        }
    }

    return 0;
}
