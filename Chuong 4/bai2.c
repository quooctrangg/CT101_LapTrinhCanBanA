#include<stdio.h>
int main(){
	int i, n;
	for(i=2;i<=9;i++)
		for(n=1;n<=10;n++)
			printf("%d * %d = %d\n", i, n, i * n);
	return 0;
}
