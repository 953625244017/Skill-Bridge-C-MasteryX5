#include <stdio.h>

int main() {
    int n = 5;
    int i, j, spaces;
    int num;

    for (i = 0; i < n; i++) {
        for (spaces = 0; spaces < n - i - 1; spaces++)
            printf("  ");

        num = 1;

        for (j = 0; j <= i; j++) {
            printf("%d   ", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
