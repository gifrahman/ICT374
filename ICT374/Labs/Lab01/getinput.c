#include <stdio.h>
#include <string.h>
#define MAX 50

int main (void)
{
	//1. Request user to input full name
	char line [MAX];
	printf("Enter your full name: \n");
	fgets(line,MAX, stdin);

	//2. Manually remove '\n' from end of string
	int n=strlen(line);
	if(line[n-1]=='\n')
	line[n-1]='\0';

	printf("Your name is:    %s \n", line);

        //3.Reverse string
	char rline [MAX];
	int i, j;

	//Move index to last char of string
	for (i=0; line[i]!='\0';i++){}
	i--;

	//Insert elements into new line in reverse
	for (j=0; i>=0; i--,j++)
	{
	 	rline[j]=line[i];
	}
	rline[j]='\0';

	printf("Name in reverse: %s \n ", rline);

	return 0;
}
