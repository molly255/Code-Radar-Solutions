#include <stdio.h>
int main() {
    int a;int b;int c;
    scanf("%d %d %d".&a.&b.&c);
    if (a+b>c){
        printf("Valid");
    }else if (a+c>b){
        printf("Valid");
    }else if(c+b>a){
        printf("Valid");
    }else{
        printf("Invalid");
    }
    return 0;
}