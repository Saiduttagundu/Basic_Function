#include <stdio.h>

void printNumbers(int n) {
    for(int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
}

int main() {
    int n;
    printf("Enter limit: ");
    scanf("%d", &n);

    printNumbers(n);
    return 0;
}
