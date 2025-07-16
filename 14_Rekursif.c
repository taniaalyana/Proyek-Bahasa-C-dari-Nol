#include <stdio.h>

int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // base case
    } else {
        return n * faktorial(n - 1);  // recursive case
    }
}

int main() {
    int x;
    printf("Masukkan bilangan: ");
    scanf("%d", &x);
    printf("Faktorial dari %d adalah %d\n", x, faktorial(x));
    return 0;
}
