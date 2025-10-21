#include<stdio.h>
#include<ctype.h>
#include<string.h>
int s_count=0;
int v_count=0;
void count(char str[])
{
	for (int i = 0 ; i<strlen(str);i++)
	{
		if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
		{
			v_count++;
		}
		else if (!isalpha(str[i]))
			s_count++;
	}
}
int main()
{
	int l;
	printf("Enter the length of the string :");
	scanf("%d",&l);
    char string[l+1];
    getchar();
    printf("Enter the string :");
    fgets(string, sizeof(string), stdin);
    count(string);
    printf("\nNo.of vowels :%d\nNo.of consonants :%d",v_count,l-v_count-s_count);
    return 0;
     
}
