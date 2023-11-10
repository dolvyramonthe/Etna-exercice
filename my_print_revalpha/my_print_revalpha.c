/*
** ETNA-HEADER, 11/10/2023
*/

#include <unistd.h> // bibliothèque

void my_print_alpha(void) // la fonction 

 
{

    for (int i = 'z'; i>='a'; i--)
    {
        write(1, &i, 1);
    }
    write(1, "\n", 1);
}

   