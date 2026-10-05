#include <stdio.h>

int main() {
    float around = 5;
    float distance_km = 14;
    float phi = 3.14159265;

    float circumference_total = distance_km / around;
    float radius = circumference_total / (2 * phi);

    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", around);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", distance_km);
    printf("Jawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", radius);

    return 0;
}