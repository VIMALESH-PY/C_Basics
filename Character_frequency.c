#include<stdio.h>
#include<string.h>
#include<ctype.h>

int freq[129];

void frequency(char *str)
{	
	int i=0;
	while( str[i] != '\0')
	{
		freq[str[i]] += 1;
		i++;
	}
}

int main()
{	
	char str[100];
	printf("Enter a string:");
	scanf("%[^\n]",str);
	frequency(str);
	printf("Character freqency :\n");
	for(int i=0;i<strlen(str);i++)
	{
		if(freq[str[i]] == -1)
			continue;
		printf("%c --> %d\n",str[i],freq[str[i]]);
		freq[str[i]] = -1;
	}
	return 0;
}
