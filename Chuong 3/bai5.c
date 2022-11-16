#include<stdio.h>
int main(){
	int i, n;
	float x, S=1;
	printf("Nhap x va n:"); scanf("%f%d", &x, &n);
	for(i=1;i<=n;i++)
		S = S * x;
	printf("%.2f^%d = %.2f", x, n, S);
	return 0;
}
