#include <stdio.h>
#include <string.h>

int main(void) 
{
    int i;
    char ip[20];
    char ipUlt3[20];
    char ipUlt2[10];
    char ipUlt1[5];
    int cont3 = 0;
    int cont2 = 0;
    int cont1 = 0;
    int partes = 0;
    int actual = 0;

    scanf("%s", ip);
    int error = 0;

    for (i = 0; i < strlen(ip); i++)
    {
        char c = ip[i];

        if ((c >= '0' && c <= '9') || c == '.')
        {
            if (c == '.')
            {
                if (actual > 3)
                {
                    error = 1;
                    break;
                }
                partes++;
                if (partes > 3)
                {
                    error = 1;
                    break;
                }
                if (partes == 2)
                {
                    ipUlt3[cont3++] = c;
                }
                if (partes == 3)
                {
                    ipUlt3[cont3++] = c;
                    ipUlt2[cont2++] = c;
                }
                actual = 0;
            }
            else
            {
                if (partes == 1)
                {
                    ipUlt3[cont3++] = c;
                }
                if (partes == 2)
                {
                    ipUlt3[cont3++] = c;
                    ipUlt2[cont2++] = c;
                }
                if (partes == 3)
                {
                    ipUlt3[cont3++] = c;
                    ipUlt2[cont2++] = c;
                    ipUlt1[cont1++] = c;
                }
                actual++;
            }
        }
        else
        {
            error = 1;
            break;
        }
    }

    if (error)
        puts("Error: dirección no válida.");
    else
    {
        ipUlt3[cont3] = '\0';
        ipUlt2[cont2] = '\0';
        ipUlt1[cont1] = '\0';
        printf("Últimas 3 partes: %s\n", ipUlt3);
        printf("Últimas 2 partes: %s\n", ipUlt2);
        printf("Última parte: %s\n", ipUlt1);
    }

    return 0;
}
