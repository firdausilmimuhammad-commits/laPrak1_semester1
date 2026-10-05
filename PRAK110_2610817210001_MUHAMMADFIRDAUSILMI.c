#include <stdio.h>
#include <math.h>

int main() {
    int base = 5;
    int height = 12;
    int side_a = height;
    int side_c = base;
    
    int side_b = sqrt((base * base) + (height * height));

    int circumference = side_a + side_b + side_c;
    int area = 0.5 * base * height;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", base);
    printf("Tinggi = %d cm\n", height);
    printf("\nJawab :\n");
    printf("Sisi A = %d cm\n", side_a);
    printf("Sisi B = %d cm\n", side_b);
    printf("Sisi C = %d cm\n", side_c);
    printf("Keliling = %d cm\n", circumference);
    printf("Luas = %d cm\n", area);

    return 0;
}