#include <stdio.h>
#include <stdarg.h>


int sum(int count, ...) {
    va_list args; // Estructura donde las variables se van a ir almacenando
    int total = 0;

    // Como las variables están almacenadas de forma
    // contigua en memoria, se especifica el último de estos
    // y se comienza a leer de ahí
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        // De dichos valores en memoria se busca
        // el siguiente del tipo especificado
        total += va_arg(args, int);
    }

    // Destructor para liberar memoria y demás
    va_end(args);

    return total;
}

int main() {
    printf("Suma de 3, 5, 7: %d\n", sum(3, 3, 5, 7));
    printf("Suma de 10, 20, 30, 40: %d\n", sum(4, 10, 20, 30, 40));

    return 0;
}
