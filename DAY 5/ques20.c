#include <stdio.h>

int main() {
    int n, i, largest = -1;
    scanf("%d", &n);
    while(n % 2 == 0) {
        largest = 2;
        n /= 2;
    }
    for(i = 3; i * i <= n; i += 2) {
        while(n % i == 0) {
            largest = i;
            n /= i;
        }
    }
    if(n > 2)
        largest = n;
    printf("%d", largest);
    return 0;
}
