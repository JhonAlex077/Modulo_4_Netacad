#include <stdio.h>

int main(void) 
{
    char letras[26], letra;

    for (letra = 'a'; letra <= 'z'; letra++)
    {
        letras[letra - 'a'] = letra;
    }

    for (letra = 'z'; letra > 'a'; letra--)
    {
        printf("%c\n", letras[letra - 'a']);
    }

    printf("%c", letras['g' - 'a']);
    printf("%c", letras['r' - 'a']);
    printf("%c", letras['e' - 'a']);
    printf("%c", letras['a' - 'a']);
    printf("%c\n", letras['t' - 'a']);

    return 0;
}
