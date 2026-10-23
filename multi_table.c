#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer to generate its multiplication table: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("\nMultiplication Table for %d:\n", n);
    printf("-----------------------------\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
