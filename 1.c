#include <stdio.h>

int main() {
    int t1, t2, t3;
    double total_time;

    // Read the input data
    printf("Enter the time t1: ");
    scanf("%d", &t1);
    printf("Enter the time t2: ");
    scanf("%d", &t2);
    printf("Enter the time t3: ");
    scanf("%d", &t3);

    // Calculate the total time
    total_time = 1 / (1.0/t1 + 1.0/t2 + 1.0/t3);

    // Print the result with rounding to 2 decimal places
    printf("Total time: %.2f hours\n", total_time);

    return 0;
}
