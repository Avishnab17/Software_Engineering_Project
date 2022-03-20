#ifndef ROOTS_FILE
#define ROOTS_FILE
#include<stdlib.h>

void view_stored_roots()
{
    FILE * ptr;
    int c;

    ptr=fopen("Software_Engineering_Project/Stored_roots_values.txt","r");

    if(ptr == NULL)
    {
        printf("File not found\n");
    }
    else
    {
        printf("File opened in read mode");
    } 
    while((c=fgetc(ptr))!=EOF)
    {
        printf("%c",c);
    }

}
#endif