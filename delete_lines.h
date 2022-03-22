#ifndef DELETE_FILE
#define DELETE_FILE

#include <stdio.h>
#include <string.h>

#define MAX 256

  void delete() 
  {
        int lno,lno1, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
		printf("\n\n Delete the line from a file :\n");
		printf("-----------------------------------------\n"); 
		printf("Input the name of the file to be opened:\n");
        scanf("%s",fname);
        fptr1 = fopen(fname, "r");
        if (!fptr1) 
		{
                printf(" File not found or unable to open the input file!!\n");
                return;
        }
        fptr2 = fopen(temp, "w"); // open the temporary file in write mode 
        if (!fptr2) 
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return;
        }
        printf(" Input the line you want to remove : ");
        scanf("%d", &lno);

        printf(" Input the second line you want to remove : ");
        scanf("%d", &lno1);
		
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1)) 
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1)) 
            {
                ctr++;
                /* skip the line at given line number */
                /*if (ctr != lno ) 
                {
                    fprintf(fptr2, "%s", str);
                }*/

                if(ctr < lno || ctr > lno1 ){
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove(fname);  		// remove the original file 
        rename(temp, fname); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
        fptr1=fopen(fname,"r"); 
            ch=fgetc(fptr1); 
          printf(" Now the content of the file %s is : \n",fname); 
          while(ch!=EOF) 
            { 
                printf("%c",ch); 
                 ch=fgetc(fptr1); 
            }
        fclose(fptr1);
/*------- End of reading ---------------*/

  } 
#endif
