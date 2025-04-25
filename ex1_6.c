#include <stdio.h>

/* Kopierprogramm, Version 2 */

main()
{
    int c, result;
     
    while((result = (c = getchar ()) != EOF))
        printf("(%d)", result);
    printf("[%d]", result);
}

