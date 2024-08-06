#include <stdio.h>


int tong_de_quy(int n) {
    if (n == 1) {
        return 1; 
    }
    else {
        return n + tong_de_quy(n - 1); 
    }
}

int main() {
    int n;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Vui long nhap so nguyen duong.\n");
    }
    else {
        printf("Tong S(%d) theo de quy la: %d\n", n, tong_de_quy(n));
    }

    return 0;
}
