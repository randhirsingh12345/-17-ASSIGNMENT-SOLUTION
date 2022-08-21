#include<stdio.h>
#include<string.h>
int main()
{
    char str[3][20],i,j;
    char temp[20];
    printf("Enter  string  : \n");
    for(i=0;i<3;i++)
    {
        printf("string %d: ",i+1);
        gets(str[i]);
    }
    printf("String are : \n");
    for(i=0;i<3;i++)
    {
        printf("String %d  : ",i+1);
        puts(str[i]);
    }
    printf("String are in ascending order :\n ");
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    for(i=0;i<3;i++)
        puts(str[i]);

    getch();
}
