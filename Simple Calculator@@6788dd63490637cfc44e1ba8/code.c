#include <stdio.h>

int main() {
    int a, b; 
    char c;
    
    scanf("%d %d %c", &a, &b, &c);

    if (c == '+') {
        printf("%d\n", a + b);
    } else if (c == '-') {
        printf("%d\n", a - b);
    } else if (c == '*') {
        printf("%d\n", a * b);
    } else if (c == '/') {
        if (b == 0) {  // Fix: Prevent division by zero
            printf("Error\n");
        } else {
            printf("%d\n", a / b);
        }
    } else {
        printf("Error\n");
    }
    
    return 0;
}
