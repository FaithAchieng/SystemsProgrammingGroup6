#include <stdio.h>
#include <ctype.h>

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;
    // Loop until the number is reduced to 0
    while (num != 0) {
        count++;
        num /= 10; // Remove the last digit from the number
    }
    return count; // Return the total count of digits
}

// Function to calculate the sum of the digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    // Loop until the number is reduced to 0
    while (num != 0) {
        sum += num % 10; // Add the last digit to the sum
        num /= 10; // Remove the last digit from the number
    }
    return sum; // Return the total sum of digits
}

int main() {
    int num;
    char next;

    printf("Enter a positive integer with one to ten digits: ");

    // Loop until a valid integer is entered
    while (scanf("%d%c", &num, &next) != 2 || next != '\n' || num <= 0 || countDigits(num) > 10) {
        printf("Invalid input. Please enter a positive integer with one to ten digits: ");
        
        // Clear input buffer to avoid infinite loop on invalid input
        while ((getchar()) != '\n'); // Read and discard characters until a newline is encountered
    }

    // Calculate the sum of the digits of the entered number
    int sum = sumOfDigits(num);
    printf("Sum of digits: %d\n", sum); // Print the sum of digits

    return 0; // Indicate that the program ended successfully
}
