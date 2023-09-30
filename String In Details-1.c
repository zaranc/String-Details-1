#include<stdio.h>
main()
{
	char password[60];
	int length = 0, i, h=0;
	
	printf("ENTER THE PASSOWRD = ");
	gets(password);
	
	length=strlen(password);
	if(length<6)
	{
		printf("\nPASSWORD IS CONTAIN MUST BE MINIMUN 6TH CHARACTER \n");
		printf("PLEASE TRY AGAIN AND ENTER THE PASSWORD");

	}
	
	for(i=0;password[i]!="null";i++)
    {
	   if(password[i] >='A'  &&  password[i] <='Z'  ||  password[i] >='a'  &&  password[i] <='z')
	   {
		h=0;
		break;
	   }
	   h=1;
   }
	if(h==1)
	{
		printf("MUST BE ENTER THE AT LEAST ONE ANY SMALL OR CAPITAL LETTER\n");
		printf("PLEASE TRY AGAIN AND ENTER THE PASSWORD");
	}
	
     for(i=0;password[i]!="null";i++)
     {
     	if(password[i]>=0  ||  password[i]<=9)
     	{
     		h=0;
     		break;
		 }
		 h=1;
	 }
	 if(h==1)
	 {
	 	printf("MUST BE ENTER THE AT LEAST ONE NUMBER IN YOUR PASSWORD\n");
	 	printf("PLEASE TRY AGAIN AND ENTER THE PASSWORD");
	 }
	 
	 for(i=0;password[i]!="null";i++)
	 {
	 	if(password[i]>'32' || password[i]<48 || password[i]>57 || password[i]<65)
	     {
		 h=0;
	     break;
		 }
		 h=1;
	 }
	 if(h==1)
	 {
	 	printf("MUST BE ENTER THE AT LEAST ONE SPECIAL CHARACTER IN YOUR PASSWORD\n");
	 	printf("PLEASE TRY AGAIN AND ENTER THE PASSWORD");
	 }
	 
	 for(i=0;password[i]!='\0';i++)
	 {
	 	if(password[i]==' ')
	 	{
	 		h=1;
	 		break;
		}
		h=0;
	 }
	 if(h==1)
	 {
	 	printf("MUST BE NOT ENTER THE ANY SPACE IN YOUR PASSWORD\n");
	 	printf("PLEASE TRY AGAIN AND ENTER THE PASSWORD");
	 	return 0;
	 }
	 
	 printf("YOUR PASSWORD IS VALID FOR SIGN UP = %s",password);
     
  }
