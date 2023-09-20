#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int day=8;
	char* month="August";
	int year=2006;
	//Declare date variables

	char* fname = "foo2";
	FILE* fstr;
	fstr=fopen(fname, "w+");
	//Create a new file for write/update

	if(fstr==NULL)
	{
		fprintf
		(stderr, "Cannot open file %s, terminate program\n",fname);
		exit(1);
	}
	//If file not found, output msg to stderr and exit

	fprintf(fstr,"Today is %04d %s %d to %s\n",day,month,year,fname);
	//If file found, print to file 

	fclose(fstr);
	//close file

	return 0;
	//End Program
}
