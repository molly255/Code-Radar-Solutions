#include <stdio.h>
int main(){
    int a; int b;
    scanf("%d %d",&a,&b);
    if (a-b>0){
        printf("Profit");
    }else if (a-b<0){
        printf("Loss");
    }else {
        printf("No Profit No Loss");
    }
    return 0;
}