#include<stdio.h>
int main(){
	int n, i, S0;
	S0=1;
	printf("Nhap n = "); scanf("%d", &n);
	for(i = 1; i <= n; i++)
		S0 *= i;
			printf("n! = %d", S0); 
	return 0;
}
