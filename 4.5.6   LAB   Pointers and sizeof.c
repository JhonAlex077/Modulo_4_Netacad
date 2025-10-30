#include <stdio.h>

int main(void) 
{
    int v;

    printf("%zu byte para tipo char\n", sizeof(char));
    char a;
    printf("%zu byte para variable char\n", sizeof(a));

    printf("%zu bytes para tipo short\n", sizeof(short int));
    short int b;
    printf("%zu bytes para variable short\n", sizeof(b));
    
    printf("%zu bytes para tipo int\n", sizeof(int));
    int c;
    printf("%zu bytes para variable int\n", sizeof(c));
    
    printf("%zu bytes para tipo long\n", sizeof(long int));
    long int d;
    printf("%zu bytes para variable long\n", sizeof(d));
    
    printf("%zu bytes para tipo long long\n", sizeof(long long int));
    long long int e;
    printf("%zu bytes para variable long long\n", sizeof(e));
    
    printf("%zu bytes para tipo float\n", sizeof(float));
    float f;
    printf("%zu bytes para variable float\n", sizeof(f));
    
    printf("%zu bytes para tipo double\n", sizeof(double));
    double g;
    printf("%zu bytes para variable double\n", sizeof(g));
    
    printf("%zu bytes para punteros a enteros\n", sizeof(int *));
    int *p;
    printf("%zu bytes para variable puntero\n", sizeof(p));

    printf("%zu bytes para dirección de variable char\n", sizeof(&a));
    char *pc = &a;
    printf("%zu bytes para puntero a variable char\n", sizeof(pc));
    printf("%zu byte para valor almacenado por puntero a char\n", sizeof(*pc));

    return 0;
}
