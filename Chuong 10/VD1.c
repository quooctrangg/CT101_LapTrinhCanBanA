#include<stdio.h>
void main()
{
	FILE* fp = fopen("D:\\Output.txt", "wt");
	if (fp != NULL){
		fprintf(fp, "0123456789");
		rewind(fp);
		fprintf(fp, "*****");
		fclose(fp);
	}
}
