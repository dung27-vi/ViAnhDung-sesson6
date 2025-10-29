#include <stdio.h>
#include <stdlib.h>

int main() {
    long long number;
    printf("Nhap mot so nguyen bat ky: ");
    scanf("%lld", &number);

    if (number == 0) {
        printf("0");
        return 0;
    }

    if (number < 0) {
        number = -number;
    }

    long long reversed_number = 0;
    long long temp = number;

    while (temp != 0) {
        int remainder = temp % 10;
        reversed_number = reversed_number * 10 + remainder;
        temp /= 10;
    }

    while (reversed_number != 0) {
        int digit = reversed_number % 10;
        printf("%d ", digit);
        reversed_number /= 10;
    }

    return 0;
}
