#include <stdio.h>

int s(int n) {

    if (n == 0) {
        return 1;
    } else {
        return 2 * s(n-1) + 1;
    }

}


int main() {

    int n;
    printf("Digite um valor para n: ");
    scanf("%d", &n);
    printf("s(%d) = %d\n", n, s(n));
    return 0;

}