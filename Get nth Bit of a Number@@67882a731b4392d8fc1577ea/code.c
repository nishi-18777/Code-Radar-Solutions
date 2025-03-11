#include <stdio.h>

int main() {
    int num = 42;  // binary: 101010
    int n = 3;     // we want to get the 3rd bit (0-based index)

    int bit = (num >> n) & 1;

    printf("The %dth bit of %d is: %d\n", n, num, bit);

    return 0;
}
