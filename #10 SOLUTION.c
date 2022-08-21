#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],i=0;
    char ch;
    int count=0;
    printf("Enter  string  : ");
        gets(str);
    printf(" Enter character :  ");
    scanf("%c",&ch);
    printf("String are : ");
    puts(str);
    while(str[i]!='\0')
    {
        if(str[i]==ch)
            count++;
            i++;
    }
    printf("\"%c\" present in string %d times",ch,count);
    getch();
}

