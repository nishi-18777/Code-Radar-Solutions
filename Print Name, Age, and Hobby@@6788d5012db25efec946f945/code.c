#include <stdio.h>

int main() {
    char str1{50};
    int a;
    char str2{40};
    scanf("%s %d %s" , &str1 , &a , &str2);
    printf("Name: %s\n", str1);
    printf("Age: %d\n", a);
    printf("Hobby: %s\n", str2);
    return 0;
}