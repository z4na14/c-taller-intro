#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char **argv) {
    // 0: STDIN
    // 1: STDOUT
    // 2: STDERR

    close(1); // Cerrar descriptor 1

    int fd = open("ejemplo.txt", // Nombre del archivo
                  O_WRONLY | O_CREAT, 
                  // BITMAP con las flags, parecido al r+w de python
                  // 0101 <- AND lógico 
                  0664); // Permisos del archivo creado
    
    dup(fd); // Duplicar al descriptor vacio más bajo
    // dup2(fd, 1) / Especificar el descriptor al que copiar
    
    puts("HOLA"); // PUT String
}