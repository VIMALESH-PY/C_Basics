#include<stdio.h>
#include<string.h>
#include<ctype.h>

int palindrome(char *str)
{
	int l=0;
	int r=strlen(str)-1;
	while(r>=l)
	{
		while(str[l]==' ')
			l++;
		while(str[r]==' ')
			r--;
		if (tolower(str[l]) != tolower(str[r]))
			return 0;
		l++;
		r--;
	}
	return 1;
}
int main()
{	
	char str[100];
	printf("Enter a string:");
	scanf("%[^\n]",str);
	if(palindrome(str))
	{
		printf("\nThe given string is a palindrome.");
	}
	else
	{
		printf("\nThe given string is not a palindrome.");
	}	
	return 0;
}
