#include <stdio.h>
#include <math.h>

int closestIntegerWithWholeSqrt(int num) {
    int sqrt_num = (int)sqrt(num);
    int next_sqrt_num = sqrt_num + 1;
    int prev_sqrt_num = sqrt_num - 1;

    if (sqrt_num * sqrt_num == num)
        return num;
    else {
        int dist_next = abs(next_sqrt_num * next_sqrt_num - num);
        int dist_prev = abs(prev_sqrt_num * prev_sqrt_num - num);

        if (dist_next < dist_prev)
            return next_sqrt_num * next_sqrt_num;
        else
            return prev_sqrt_num * prev_sqrt_num;
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int closest_int = closestIntegerWithWholeSqrt(num);
    printf("Closest integer with a whole number square root: %d\n", closest_int);

    return 0;
}
