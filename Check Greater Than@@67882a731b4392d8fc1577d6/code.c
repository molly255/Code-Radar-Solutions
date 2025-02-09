#include <stdio.h>
int main() {
    int a;int b;
    scanf("%d %d",&a,&b);
    a>b;
    printf("%s\n", (a > b) ? "True" : "False");
    return 0;
}