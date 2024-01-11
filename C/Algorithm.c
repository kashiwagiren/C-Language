/* Find the largest number among three numbers */

// Step 1: Start
#include <stdio.h>

int main() {
    // Step 2: Declare variables a, b and c.
    int a, b, c;

    printf("Enter the values: ");
    scanf("%d %d %d", &a, &b, &c);
    // Step 3: Read variables a, b and c.

    // Step 4:
    if (a > b) {
        if (a > c) {
            printf("%d is the largest number.\n", a);
        } else {
            printf("%d is the largest number.\n", c);
        }
    } else {
        if (b > c) {
            printf("%d is the largest number.\n", b);
        } else {
            printf("%d is the largest number.\n", c);
        }
    }

    return 0;
    // Step 5: Stop
}
