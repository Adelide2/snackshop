/*project: a c snack bar application
Author:Adelide Gechemba
Compiler:c89
Licence:MIT
Date:14 july 2022
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello customer welcome to Zetech c shop!\n");
    menu();
    return 0;
}
   int menu()
   {
    int item;
    printf("1.hotdog-ksh90\n");
    printf("2.hamburger-ksh300\n");
    printf("3.french fries-ksh150\n");
    printf("4.milkshake-ksh150\n");
    printf("5.coffee-ksh70\n");
    printf("6.beef smokie-ksh40\n");
    printf("enter item number:");
    scanf("%16",&item);
    if(item>0&&item<9);
    {
        printf("items added to cart\n");
    }
    else
  {
      printf("invalid\n");
      menu();
  }
  return item;



    }


