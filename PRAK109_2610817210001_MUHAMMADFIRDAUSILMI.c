#include <stdio.h>

int main() {
    int yuZhongArmy = 958730;
    const char *hero[] = {"Zilong", "Ling", "Baxia", "Wanwan", "Chang'e"};
    int total_hero = sizeof(hero) / sizeof(hero[0]);
    int army_per_hero = yuZhongArmy / total_hero;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", yuZhongArmy);
    printf("Jumlah pahlawan = %d\n", total_hero);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", army_per_hero);

    return 0;
}