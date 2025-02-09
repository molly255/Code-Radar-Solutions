#include <stdio.h>
int main() {
    char name[100];int age;char hobby[100];
    scanf("%s %d %s",name,&age,hobby);
    printf("Name: %s\nAge: %d\nHobby: %s", name,age,hobby);
    return 0;
}