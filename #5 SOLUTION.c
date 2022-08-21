#include<stdio.h>
int main()
{

    char str[20];
    printf("Enter a string : ");
    gets(str);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
        str[i]=str[i]+32;
       i++;
    }
     printf("%s",str);
     getch();
}
