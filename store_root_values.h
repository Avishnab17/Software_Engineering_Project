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
void storeroot()
{
    int num;
     char name[20];
     int val;
    char rev[10];
   // char dataToAppend[BUFFER_SIZE];

    printf("Enter the number of values that you want to store:\n");
    scanf("%d",&num);

    FILE *fptr;
    fptr=fopen("Stored_roots_values.txt","a");

    if(fptr==NULL)
    {
        printf("Error!");
        exit(EXIT_FAILURE);
    }
    printf("\n");
    printf("Enter equation type:\n");
    scanf("%s",name);
     for(int i=0;i<num;++i)
    {
        printf("Enter values:\n");
        scanf("%d",&val);
       
    } 


   fptr=freopen("Stored_roots_values.txt","r",fptr);
   printf("\nSuccessfully appended data\n");
   readFile(fptr);
   printf("\n");

    fclose(fptr);
}
#endif