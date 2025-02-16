#include <stdio.h>
int main(){
    int a; 
    scanf("%d",&a);
    a & (1<<31)  ? printf("Set"):printf("Not Set");
    
    return 0;
}