#include <stdio.h>
int main(){
    int a; int b; int c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b>c){
        pritnf("%d",a);
    }else if(b>a>c){
        printf("%d",b);
    }else{
        printf("%d",c);
    }
    return 0;
}