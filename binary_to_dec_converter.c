#include <stdio.h>

int binaryToDecimal(int n) {
    int decimal = 0;
    int base = 1;
    int rem;

    while (n > 0) {
        rem = n % 10;
        decimal += rem * base;
        n /= 10;
        base *= 2;
    }

    return decimal;
}

int main() {
    int binary;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    printf("Decimal equivalent: %d\n", binaryToDecimal(binary));

    return 0;
}
