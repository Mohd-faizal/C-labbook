#include <stdio.h>
int main() {
int intType;
float floatType;
double doubleType;
char charType;
printf("Size of int: %zubytes\n", sizeof(intType));
printf("Size of float: %zubytes\n", sizeof(floatType));
printf("Size of double: %zubytes\n", sizeof(doubleType));
printf("Size of char: %zubyte\n", sizeof(charType));
return 0;
}
