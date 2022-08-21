#include<stdio.h>
int main()
{
    int count =0;
    char str[20];
    char ch;
    printf("Enter a string : ");
    gets(str);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u' )
            count++;
        i++;

    }
    printf("Total number of Vowel in a string  \"%s\" = %d ",str,count);
    getch();

}

