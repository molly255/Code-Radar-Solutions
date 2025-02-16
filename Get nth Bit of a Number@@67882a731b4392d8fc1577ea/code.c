#include <stdio.h>

int getNthBit(int num, int n) {
    return (num & (1 << n)) ? 1 : 0;
}

int main() {
    int num, n;
    
    
    scanf("%d", &num);
    scanf("%d", &n);
    
    // Check Nth Bit
    printf("%d",getNthBit(num, n));
    
    return 0;
}
