#include <stdio.h>

void increment(int *v) {
    *v = *v + 1;
}

int main() {
    int v = 5;
    increment(&v);
    printf("%d", v);
}

