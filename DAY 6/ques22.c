#include <stdio.h>

int main() {
    int n, rem, base = 1, dec = 0;
    scanf("%d", &n);
    while(n > 0) {
        rem = n % 10;
        dec += rem * base;
        base *= 2;
        n /= 10;
    }
    printf("%d", dec);
    return 0;
}
