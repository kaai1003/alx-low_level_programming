#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef __SIZE_TYPE__ size_t;
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
