#include<stdio.h>
#include<math.h>
int main(){
	int n, i, s;
	s = 1;
	printf("Nhap n = "); scanf("%d", &n);
	for(i=1;i<=n;i++)
		s = s + pow(-1,i)*i;
		
		printf("S3 = %d", s);
		
	return 0;
}
