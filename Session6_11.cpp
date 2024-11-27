#include <stdio.h>

// Ham dung de kiem tra xem so nhap vao co phai so nguyen to khong (co tham khao chatGPT)
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    // Bien cout la bien dem so luong so nguyen to 
    int count = 0;
    // Cho num bat dau tu so 2, so nguyen to dau tien
    int num = 2;

    printf("Cac so nguyen to dau tien la:\n");
    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++; //Tang num cho den khi isPrime(num) dung (tra ve cho ham gia tri la 1)
    }

    return 0;
}

