#!/bin/bash
#gcc -c 0-isupper.c 0-strcat.c 1-strncat.c 2-strlen.c 3-puts.c 4-isalpha.c 6-abs.c 1-isdigit.c 100-atoi.c 2-strncpy.c 3-strcmp.c 4-strpbrk.c 9-strcpy.c 0-memset.c 1-memcpy.c 2-strchr.c 3-islower.c 3-strspn.c 5-strstr.c _putchar.c -fpic
gcc  0-isupper.o 0-strcat.o 1-strncat.o 2-strlen.o 3-puts.o 4-isalpha.o 6-abs.o 1-isdigit.o 100-atoi.o 2-strncpy.o 3-strcmp.o 4-strpbrk.o 9-strcpy.o 0-memset.o 1-memcpy.o 2-strchr.o 3-islower.o 3-strspn.o 5-strstr.o _putchar.o  -shared -o liball.so
