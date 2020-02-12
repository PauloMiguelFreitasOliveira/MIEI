#include <stdio.h>
#include <stdlib.h>

int main() {
    return 0;
}

// Exercício 1

void ex1a(){
    int x, y;
    x = 3; y = x + 1;
    x = x * y ; y = x + y ;
    printf ("%d %d\n ", x, y);

    /* OUTPUT:
     * 12 16
     */
}

void ex1b(){
    int x, y;
    x = 0;
    printf ("%d %d\n ", x, y);

    /* OUTPUT:
     * 0 39
     */
}

void ex1c(){
    char a, b, c;
    a = 'A'; b = ' '; c = '0';
    printf("%c %d\n", a, a);
    a = a + 1; c = c + 2;
    printf("%c %d %c %d\n", a, a, c, c);
    c = a + b;
    printf("%c %d\n" , c , c );

    /* OUTPUT:
     * A 65
     * B 66 2 50
     * b 98
     */
}

void ex1d(){
    int x, y;
    x = 200; y = 100;
    x = x + y; y = x - y; x = x - y;
    printf ("%d %d\n ", x, y);
    /* OUTPUT:
     * 100 200
     */
}