#include <stdio.h>

/* Ein Programm, das Leerzeichen, Tabulatorzeichen 
    und Zeilentrenner zaehlt */
main()
{
    int c, nl, nt;
    long nc, nb;

    nc = 0;
    nt = 0;
    nl = 0;
    nb = 0;
    while((c = getchar ()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        else if (c == ' ')
            ++nb;
        else if (c == '\t')
            ++nt;
    }
    printf("Zeichen: %ld, Leerzeichen: %ld, Zeilen: %d, Tabulatoren: %d\n", 
        nc, nb, nl, nt);
}

