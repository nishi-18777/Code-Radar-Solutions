#include <stdio.h>

int main() {
    char str1{50};
    int a;
    char str2{40};
    scanf("%c %d %c" , &str1 , &a , &str2);
    printf("Name: %c\n", str1);
    printf("Age: %d\n", a);
    printf("Hobby: %c\n", str2);
    return 0;
}