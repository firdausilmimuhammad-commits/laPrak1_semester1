#include <stdio.h>

int main() {
    int side1 = 4;
    int side2 = 5;
    int side3 = 7;
    int pricePerMeter = 85000;

    int circumference = side1 + side2 + side3;
    int totalPrice = circumference * pricePerMeter;

    printf("Diketahui:\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", side1, side2, side3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", circumference);
    printf("Harga tanah Per Meter adalah %d\n", pricePerMeter);
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah: Rp %d\n", totalPrice);

    return 0;
}