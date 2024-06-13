#include <stdio.h>
#include <ctype.h>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    char next;

    printf("Enter a positive integer with one to ten digits: ");

    // Loop until a valid integer is entered
    while (scanf("%d%c", &num, &next) != 2 || next != '\n' || num <= 0 || countDigits(num) > 10) {
        printf("Invalid input. Please enter a positive integer with one to ten digits: ");

        // Clear input buffer
        while ((getchar()) != '\n');
    }

    int sum = sumOfDigits(num);
    printf("Sum of digits: %d\n", sum);

    return 0;
}
