#include <stdio.h>

#define IN  1   /* in einem Wort */
#define OUT 0   /* ausserhalb eines Wortes */

/* Ein Programm, das seine Eingabe ausgibt,
    und zwar ein Wort pro Zeile */ 

main()
{
    int c, state;

    state = OUT;
    while ((c = getchar ()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
                putchar ('\n');
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
        }
        if (state == IN)
            putchar (c);
    }
    if (state == IN)
        putchar ('\n');
}

