#include <stdio.h>

void drawTriangle(int n, int x, int i, int j) {


    if (n < 3 && x < 0 && x > 9) {
        printf("Invalid input. Please ensure n >= 3 and 0 <= x <= 9.\n");
        return;
    }

    for ( i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            printf("0");
        } else {
            printf("1");
        }

        for ( j = 1; j < i; j++) {
            if (i == n - 1) {
                printf("1");
            } else {
                printf("%d", x);
            }
        }

        // Print corners
        if (i != 0) {
            if (i == n - 1) {
                printf("0");
            } else {
                printf("1");
            }
        }

        printf("\n");
    }
}

int main() {
    int n, x, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter x: ");
    scanf("%d", &x);

    drawTriangle( n,  x,  i,  j);

    return 0;
}
