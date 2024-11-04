#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("The accumulation of integers is: %d\n", sum);
    return sum;
}
