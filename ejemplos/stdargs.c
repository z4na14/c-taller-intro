#include <stdio.h>
#include <stdarg.h>


int sum(int count, ...) {
    va_list args;
    int total = 0;

    va_start(args, count);

    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }

    va_end(args);

    return total;
}

int main() {
    printf("Suma de 3, 5, 7: %d\n", sum(3, 3, 5, 7));
    printf("Suma de 10, 20, 30, 40: %d\n", sum(4, 10, 20, 30, 40));

    return 0;
}
