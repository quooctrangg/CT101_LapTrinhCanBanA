#include<stdio.h>
int main(){
	float n, i, s;
	s = 0;
	printf("Nhap n =  "); scanf("%f", &n);
	for(i=1;i<=n;i++)
	s = s + (i/(i+1));
	
		printf("S2 = %.3f", s);	
	return 0;
}
