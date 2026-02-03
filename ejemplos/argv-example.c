#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int verbose = 0;
    char *inputFile = NULL;
    char *outputFile = NULL;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-v") == 0) {
            verbose = 1;

        } else if (strcmp(argv[i], "-f") == 0 && i + 1 < argc) {
            inputFile = argv[++i];

        } else if (strcmp(argv[i], "-o") == 0 && i + 1 < argc) {
            outputFile = argv[++i];

        } else {
            printf("Unknown argument: %s\n", argv[i]);
            return 1;
        }
    }

    if (verbose) {
        printf("Verbose mode enabled.\n");
    }
    if (inputFile) {
        printf("Archivo proporcionado: %s\n", inputFile);
    }
    if (outputFile) {
        printf("Archivo generado: %s\n", outputFile);
    }

    return 0;
}
