CC=gcc
CFLAGS=-Wall -Werror
BUILD_DIR=./build

all: ej1 ej2 ej3 ej4 ej5 ej6

# CC: Compilador (Para C++ la norma es poner CXX, el equivalente de CC)
# CFLAGS: Flags de compilacion
# $<: Primer requisito
ej1: 1-io-test.c
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $<

ej2: 2-argv-example.c
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $<
ej3: 3-string-structstroup.c
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $<
ej4: 4-includes.c
	$(CC) $(CFLAGS) -I./inc\
		-o $(BUILD_DIR)/$@ $<
	$(CC) $(CFLAGS) -I./inc -E $< > $(BUILD_DIR)/ej4_preprocessed
ej5: 5-ellipsis.c
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $<
ej6: 6-piping.c
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $<

hola:
	@echo "Este comando no lo ves"
	echo "Este comando si lo ves"

# -p: En caso de existir, omitir
clean:
	rm -rf ./*.o ./*.s ./$(BUILD_DIR)
	mkdir -p build
