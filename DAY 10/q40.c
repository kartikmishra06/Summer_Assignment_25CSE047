#include <stdio.h>

int main() {
    int n, i, j, space;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for(j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        for(j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}
