#include<stdio.h>
int main()
{

    char str[50];
    printf("Enter a string : ");
    gets(str);
    int i=0;
    int count_alphabet=0,count_digits=0,count_special_symbol=0;
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z' )
            count_alphabet++;
        else if(str[i]>='A' && str[i]<='Z')
                count_alphabet++;
        else if(str[i]>=48 && str[i]<=57)
            count_digits++;
        else
            count_special_symbol++;

       i++;
    }
     printf("Total alphabet in a sting is %d \n",count_alphabet);
     printf("Total Digits in a sting is %d \n",count_digits);
     printf("Total special symbol in a sting is %d \n",count_special_symbol);
     getch();
}

