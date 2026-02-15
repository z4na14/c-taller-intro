#include <stdio.h>


typedef struct  {
  void (*print)(char* string);
  char* string;
} String;

void print(char* string) {
  printf("%s\n", string);
}

int main() {
  String holaMundo = {print, "Hola Mundo"};

  holaMundo.print(holaMundo.string);
  holaMundo.print("Soy Omelo Chino");


  return 0;
}
