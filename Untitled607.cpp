#include <stdio.h>

int main() {
    int a, b, ucln;
    
    printf("Nhap vao so nguyen duong a: ");
    scanf("%d", &a);
    printf("Nhap vao so nguyen duong b: ");
    scanf("%d", &b);
    
    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong.\n");
        return 1;
    }
    
    int temp_a = a;
    int temp_b = b;
    
    while (temp_b != 0) {
        int temp = temp_b;
        temp_b = temp_a % temp_b;
        temp_a = temp;
    }
    
    ucln = temp_a;
    
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln);
    
    return 0;
}
