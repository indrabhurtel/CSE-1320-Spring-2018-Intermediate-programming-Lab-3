/*Indra Bhurtel*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find_filename(int n,char **b)
{
int i;
int counter=0;

int check=0;
for(i=0;i<n&&check==0;i++)
{
if(strcmp(*b,"filename")==0)
{
check=1;
}
counter++;
b++;
}
if(check!=1)
{
counter=0;
}
return (counter-1);
}

void fileRead(int v,char s[]){
    char ch;
     FILE *fptr;
     fptr = fopen(s, "r");
    if (fptr == NULL)
    {
        printf("No filename given.Bye! \n");
        exit(0);
    }
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf ("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
}
int main(int argc,char* argv[])
{
    int counter;
    if(find_filename(argc,argv)>0){
 for(counter=0;counter<argc;counter++){

if(strcmp(argv[counter],"filename")==0){
if(strcmp(argv[counter+2],"string")==0){
printf("Filename :%s\n",argv[counter+1]);
printf("We are dealing with string info.\n\n");
printf("Contents of the file:\n");
        }

 if(strcmp(argv[counter+2],"numbers")==0){
printf("Filename : %s\n",argv[counter+1]);
printf("We are dealing with number info.\n\n");
printf("Contents of the file:\n");
        }
fileRead(counter+1,argv[counter+1]);
            }
    }
   }
    return 0;
}
