#include <stdio.h>

int revNum(int n, int rev) {
    if(n == 0)
        return rev;
    return revNum(n / 10, rev * 10 + (n % 10));
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", revNum(n, 0));
    return 0;
}
