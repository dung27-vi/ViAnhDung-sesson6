#include <stdio.h>

// Ham tim UCLN cua hai so 
int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Ham tim BCNN cua hai so 
int BCNN(int a, int b) {
    return (a * b) / UCLN(a, b);
}

int main() {
    int num1, num2;
    printf("Nhap vao hai so nguyen duong: ");
    scanf("%d %d", &num1, &num2);
    
    // Kiem tra có phai là so nguyên duong hay không
    if (num1 <= 0 || num2 <= 0) {
        printf("Vui long nhap hai so nguyen duong.\n");
    } else {
        printf("BCNN cua %d va %d la: %d\n", num1, num2, BCNN(num1, num2));
    }
    
    return 0;
}
