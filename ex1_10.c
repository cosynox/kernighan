#include <stdio.h>

/* Ein Kopierprogramm, das die Eingabe zur Ausgabe kopiert 
    und dabei jedes Tabulatorzeichen durch \t ersetzt, jeden backspace 
    durch \b und jeden Gegenschrägstrich durch \\.
    Dadurch werden Tabulatorzeichen und backspace-Zeichen eindeutig 
    sichtbar */

main()
{
    int c;

    while ((c = getchar ()) != EOF)
    {
        if (c == '\t')
        {
            putchar ('\\');
            putchar ('t');
        }
        else if (c == '\b')
        {
            putchar ('\\');
            putchar ('b');
        }
        else if (c == '\\')
        {
            putchar ('\\');
            putchar ('\\');
        }
        else
            putchar (c);
    }
}

