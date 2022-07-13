/*
project: A c snack application

Author:Adelide Gechemba
Compiler:c89
Licence:MIT
Date:13 july 2022
*/



#include <stdio.h>
#include <stdlib.h>

int menu();
int main()
{
    printf("Hello customer welcome to your snack shop!\n");
    menu();
    return 0;

}
    int menu()
    {
    int item;
    printf("1.chipo - ksh 50\n");
    printf("2.samosa - ksh 30\n");
    printf("3.Hot dog - ksh 70\n");
    printf("4.smokie - ksh25\n");
    printf("5.tea - ksh 30\n");
    printf("6.fruit juice - ksh 70\n");

    printf("enter item number:");
    scanf("%d",&item);
    if(item>0 && item<=6)
    {
        printf("items added to cart\n");

    }
    else
        {
    printf("invalid\n");
    menu();
    }


    return item;
