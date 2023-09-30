#include<stdio.h>

int main()
{
    char EMAIL_ID[30];
    char PASSWORD[30];
    
    printf("\n.......LOGIN OF YOUR GOOGLE ACCOUNT........");
    printf("\n ENTER THE EMAIL ID = ");
    gets(&EMAIL_ID);
    printf("\n ENTER THE PASSWORD = ");
    gets(&PASSWORD);
    
    if(strcmp(EMAIL_ID,"red&white@gmail.com")==0)
    {
       if(strcmp(PASSWORD,"red&WHITE99")==0)
       {
         printf("\n      ...LOGIN SUCCESSFULL...");
       }
       else
       {
         printf("\n.....PASSWORD IS NOT VALID.....");
       }
    }
    else
    {
      printf("\n.....EMIAL ID DOES NOT EXIST IN OUR SERVER.....");
    }
    return 0;
}
