#include<stdio.h>
#include<ctype.h>
#include<string.h>

int stringcompare(char s1[],char s2[])
{
	int i1=0,i2=0;
    while (i1<strlen(s1) && i2<strlen(s2))
	 {
	 	while ( i1 < strlen(s1) && !isalpha(s1[i1]) )
	 	i1++;
	 	while ( i2 < strlen(s2) && !isalpha(s2[i2]) )
	 	i2++;
	 	if (s1[i1] != s2[i2])
	 	{
	 	    return 0;
	 	}
		i1++;
		i2++;
	 }	
	 return 1;
}

int main()
{
	int res = stringcompare("working","not working");
	printf("%d",res);
	return 0;
}
