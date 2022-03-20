#ifndef STORE_ROOTS_FILE
#define STORE_ROOTS_FILE
#include <stdlib.h>
#define BUFFER_SIZE 1000

void readFile(FILE *fptr)
{
    char ch;
    do
    {
        ch=fgetc(fptr);
        putchar(ch);
    } while (ch!=EOF);
    
}

#endif