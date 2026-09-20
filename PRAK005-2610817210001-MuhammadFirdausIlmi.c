#include <stdio.h>

int main() {
    const char *hurufF[] = {
        "#######",
        "#      ",
        "#      ",
        "###### ",
        "#      ",
        "#      ",
        "#      "
    };
    const char *hurufS[] = {
        " #######",
        "#       ",
        "#       ",
        " #######",
        "       #",
        "       #",
        "####### "
    };
    for (int i = 0; i < 7; i++) {
        printf("%s    %s\n", hurufF[i], hurufS[i]);
    }

    return 0;
}