#include<stdio.h>
void main(){
	int i = 10;
	int c = '/';
	float f = 2016.0918;
	char *st="Ghi du lieu vao file";
	FILE* fp = fopen("Output.txt", "wt");
	if (fp != NULL){
		fprintf(fp,"%s\n", st);
		fprintf(fp, "%d %c %.2f\n", i, c, f);
		
		fputc('A', fp);
		fputc(13, fp);
		fputc(10, fp);
		putc(66, fp);
		
		fclose(fp);
	}
}