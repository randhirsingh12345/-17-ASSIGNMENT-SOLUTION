#include<stdio.h>
int main()
{
    int count =0;
    char str[20];
    char ch;
    printf("Enter a string : ");
    gets(str);
    printf("Enter a character : ");
    scanf("%c",&ch);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==ch)
            count++;
        i++;

    }
    printf("Total number of occurrence \"%c\" in a string  \"%s\" = %d ",ch,str,count);
    getch();

}
