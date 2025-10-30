#include <stdio.h>


int main(void) 

{
    int serieFibo[10], i;
    serieFibo[0] = 1;
    serieFibo[1] = 1;

    for (i = 2; i < 10; i++)
    {
        serieFibo[i] = serieFibo[i - 1] + serieFibo[i - 2];
    }


    for (i = 0; i < 10; i++)
    {
        printf("%d\n", serieFibo[i]);
    }

    
    for (i = 0; i < 10; i += 2)
    {
        printf("%d\n", serieFibo[i]);
    }

    
    for (i = 1; i < 10; i += 2)
    {
        printf("%d\n", serieFibo[i]);
    }

    return 0;
}
