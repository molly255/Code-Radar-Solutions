#include <stdio.h>
#include <math.h>  // For sqrt() function
int main() {
    int n, isPrime = 1; // Assume the number is prime (isPrime = 1)
    scanf("%d", &n); // Input number
    if (n < 2) {
        isPrime = 0; // Numbers less than 2 are not prime
    } else {
        for (int i = 2; i <= sqrt(n); i++) { // Check divisibility up to sqrt(n)
            if (n % i == 0) {
                isPrime = 0; // If divisible, not prime
                break;
            }
        }
    }
    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}