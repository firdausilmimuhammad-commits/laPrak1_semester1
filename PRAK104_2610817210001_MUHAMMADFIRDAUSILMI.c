#include <stdio.h>

int main() {
    int priceA = 400000;
    int priceB = 350000;
    float discountA = 0.13;
    float discountB = 0.21;
    float priceAfterDiscount_1 = priceA - (priceA * discountA);
    float priceAfterDiscount_2 = priceB - (priceB * discountB);

    printf("Harga sepatu A adalah %d\n", priceA);
    printf("Harga sepatu B adalah %d\n", priceB);
    printf("Sepatu A mendapat diskon %.0f%% sehingga harganya menjadi %.0f\n", discountA * 100, priceAfterDiscount_1);
    printf("Sepatu B mendapat diskon %.0f%% sehingga harganya menjadi %.0f\n", discountB * 100, priceAfterDiscount_2);

    return 0;
}