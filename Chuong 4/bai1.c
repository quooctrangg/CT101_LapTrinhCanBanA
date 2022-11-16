#include<stdio.h>
int main() {
	int i;
	for(i=1; i <= 100; i++)
	if(i % 10 == 0) printf("	%d\n", i);
	else printf("	%d", i);
	return 0;
}
