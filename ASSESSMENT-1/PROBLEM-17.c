#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    num = num - (num % 2) * 5;
    printf("%d", num);

    return 0;
}