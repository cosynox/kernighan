#include <stdio.h>

/* Ein Kopierprogramm, das eine Folge von Leerzeichen 
    durch ein einzelnes Leerzeichen in der Ausgabe ersetzt */

#define TRUE 1
#define FALSE 0

main()
{
    int c, nb;

    nb = 0;
    while ((c = getchar ()) != EOF)
    {
        if (c != ' ')
            nb = FALSE;
        if (nb == FALSE)
            putchar (c);
        if (c == ' ')
        {
            nb = TRUE;
        }
    }
}

