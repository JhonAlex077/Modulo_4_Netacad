#include <stdio.h>

int main(void) 
{
    char parte1[4];
    char parte2[4];
    char parte3[4];
    char parte4[4];
    char direccion[16];

    scanf("%s", parte1);
    scanf("%s", parte2);
    scanf("%s", parte3);
    scanf("%s", parte4);

    sprintf(direccion, "%s.%s.%s.%s", parte1, parte2, parte3, parte4);
    printf("%s\n", direccion);

    return 0;
}
