#include <stdio.h>

int main() {
    int num = 42;  
    int n = 3;   

    int bit = (num >> n) & 1;

    printf("The %dth bit of %d is: %d\n", n, num, bit);

    return 0;
}
