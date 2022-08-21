#include<stdio.h>
#include<string.h>
int main()
{

    char str[20];
    int j=0;
    printf("Enter a string : ");
    gets(str);
    int i=0;
    j=strlen(str)-1;
    while(i<j)
    {
       int temp=str[j];
        str[j]=str[i];
        str[i]=temp;
        i++;
        j--;

    }
    printf("The reverse string is  ");
    puts(str);
     getch();
}

