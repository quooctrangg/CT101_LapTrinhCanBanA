#include<stdio.h>
int main(){
	int n, i;
	float S1 = 0;
	printf("Nhap n = "); scanf("%d", &n);
	for(i=1;i<=n;i++)
		S1 += (float)1/i;
		printf("S1 = %.2f", S1);
	return 0;
}
