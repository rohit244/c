#include <stdio.h>
int power(int x, int y);
int main() {
    int base, a, result;
    printf("Enter the number: ");
    scanf("%d", &base);
    printf("Enter the power of the number: ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d\n", base, a, result);
    return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
