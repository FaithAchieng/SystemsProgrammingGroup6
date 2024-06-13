#include <stdio.h>
int sum_of_digits(int number) {
    int sum = 0;  
    while (number > 0) {
        sum += number % 10;
        number /= 10;       
    }
    return sum;
}
int main() {
    int number;  
    printf("Enter a positive integer: ");
    scanf("%d", &number);  
    if (number < 0) {
        printf("The number is not positive. Please enter a positive integer.\n");
    } else {    
        int result = sum_of_digits(number);     
        printf("The sum of the digits is: %d\n", result);
    }    return 0;
}
