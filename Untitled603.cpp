#include <stdio.h>

int main() {
    int N, sum = 0, i;

    printf("Nhap vao mot so nguyen duong N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        sum += i;
    }

    printf("Tong cac so tu 1 den %d la: %d\n", N, sum);

    return 0;
}
