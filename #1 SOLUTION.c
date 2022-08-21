#include<stdio.h>
int main()
{
    int len=0;
    char str[20];
    printf("Enter a string : ");
    gets(str);
    int i=0;
    while(str[i]!='\0')
    {
        len++;
        i++;

    }
    printf("Length of string is %d \n",len);
    int l=length(str);
    printf("Calculate length of a string by second method : \n");

    printf("Length of string is %d ",l);
    getch();
}
int length( char str[])
{
    int l;
    for(l=0;str[l]!='\0';l++);
    return l;
}
