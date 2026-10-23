#include <stdio.h>

int main() {
    printf("Prime numbers between 1 and 100 are:\n");
    for (int n = 2; n <= 100; n++) {
        int isPrime = 1; 

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0; 
                break;       
            }
        }

        if (isPrime) {
            printf("%d ", n);
        }
    }
    
    printf("\n");
    return 0;
}
