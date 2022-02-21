#include <stdio.h>

int Policz(int a, int b);

int main() {
    printf("Hello, World!\n");
    printf("\n%d", Policz(12,5));
    return 0;
}

int Policz(int a, int b)
{
    return a*b;
}