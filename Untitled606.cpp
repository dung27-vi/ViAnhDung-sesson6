#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    double num1, num2;
    int running = 1;

    while (running) {
        printf("\n--- MENU ---\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");

        printf("Nhap vao so thu nhat: ");
        scanf("%lf", &num1);
        printf("Nhap vao so thu hai: ");
        scanf("%lf", &num2);

        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Tong cua %.2f va %.2f la: %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Hieu cua %.2f va %.2f la: %.2f\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Tich cua %.2f va %.2f la: %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Thuong cua %.2f va %.2f la: %.2f\n", num1, num2, num1 / num2);
                } else {
                    printf("Loi: Khong the chia cho 0.\n");
                }
                break;
            case 5:
                running = 0;
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }
    return 0;
}
