#include<stdio.h>
int main(){
	int n, i, s;
	s=1;
	printf("Nhap n = "); scanf("%d", &n);
	for(i=1;i<=n;i++)
		s *= i;
		
			printf("%d! = %d", n, s);
	return 0;
}
