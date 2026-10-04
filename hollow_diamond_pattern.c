#include <stdio.h>

int main() {
    int n = 4;
    int i, j, spaces;

    for (i = 1; i <= n; i++) {
        for (spaces = 1; spaces <= n - i; spaces++)
            printf("  ");

        printf("*");

        if (i > 1) {
            for (j = 1; j <= 2 * i - 3; j++)
                printf("  ");
            printf(" *");
        }

        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        for (spaces = 1; spaces <= n - i; spaces++)
            printf("  ");

        printf("*");

        if (i > 1) {
            for (j = 1; j <= 2 * i - 3; j++)
                printf("  ");
            printf(" *");
        }

        printf("\n");
    }

    return 0;
}
