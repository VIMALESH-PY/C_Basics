#include<stdio.h>
#include<string.h>
#include<ctype.h>

int word_count(char *str)
{
	int count=0,i=0;
	
	while(str[i] == ' ')
		i++;
	
	int j=strlen(str)-1;
	
	while(str[j] == ' ')
	{
		j--;
	    str[j] = '\0';
	}
	
	while(i<strlen(str))
	{
		if(str[i] == ' ')
		{
			while(str[i] == ' ')
				i++;
			count++;
		}
		else
			i++;
	}
	return count+1;
}

int main()
{	
	char str[100];
	printf("Enter a string:");
	scanf("%[^\n]",str);
	printf("No of words in the given string is : %d",word_count(str));
	return 0;
}
