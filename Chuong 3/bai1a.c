#include<stdio.h>
int main(){
	int n, i;
	int s=0;
	printf("Nhap n = "); scanf("%d", &n);
	for(i=1;i<=n;i++)
			s = s + i;
			
		printf("S1 = %d", s); 
	return 0;
}
