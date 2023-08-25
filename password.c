#include<stdio.h>
#include<string.h>

main()
{
	char password[100];
	int i,length,letter=0,digit=0,symbol=0;
	
	
	printf("ENTER YOUR PASSWORD : ");
	gets(password);
	
	length = strlen(password);
	//printf("%d",length);
	
	if(length>=6)
	{
		for(i=0;i<length;i++)
		{
			if(password[i]>='a' && password[i]<='z' || password[i]>='A' && password[i]<='Z')
			{
				letter=1;
			}
			else if(password[i]>='0' && password[i]<='9')
			{
				digit=1;
			}
			else
			{
				symbol=1;
			}
			
		}
		if(letter == 1 && digit == 1 && symbol == 1)
		{
			printf("PASSWORD IS  VALID\n ");
		}
		else 
		{
			printf("PASSWORD IS NOT VALID PLZ ENTER VALID PASSWORD \n");
		}
		
	}
	else
	{
		printf("PLZ ENTER PASSWORD LENGTH MINIMUM 6 CHARACTER ");
	}
	
	
	
	
}
