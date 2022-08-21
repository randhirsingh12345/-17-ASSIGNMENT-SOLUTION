#include<stdio.h>
int main()
{

    char str[20],str2[20];
    printf("Enter a string : ");
    gets(str);
    int i=0;
    while(str[i]!='\0')
    {
       str2[i]=str[i];
       i++;
    }
     printf("After coping the string are %s",str2);
     getch();
}
