#include <stdio.h>

int factorial (int x);
int combination (int n, int r);

int main () {

    int a, b = 0, c, d;

    scanf ("%d", &a);

    for (int i = 0; i <= a; i++, b++) {

        c = 0;
        d = c + 1;
        while (d <= i) {

            printf("%d ", combination(b, c));
            c++;
            d++;
        }
        printf(" 1\n");
    }


    return 0;
}

int factorial (int x) {

    int fact = 1;

    for (int i = x; i >= 1; i--) {

        fact *= i;
    }
    return fact;
}
int combination (int n, int r){
    return factorial(n) / (factorial(r) * factorial(n - r));
}