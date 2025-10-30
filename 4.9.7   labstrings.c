#include <stdio.h>
#include <string.h>

int main(void)
{
    char palabra[256];
    int i;
    scanf("%s", palabra);
    int longitud = strlen(palabra);

    for (i = 0; i < longitud / 2; i++)
    {
        char temp = palabra[i];
        palabra[i] = palabra[longitud - i - 1];
        palabra[longitud - i - 1] = temp;
    }

    printf("%s\n", palabra);
    return 0;
}
