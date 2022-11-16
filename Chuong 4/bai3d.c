#include<stdio.h>
#include<math.h>
int main(){
	int n, i, s=1;
	float x, S3=0;
	printf("Nhap n = "); scanf("%d", &n);
	printf("Nhap x = "); scanf("%f", &x);
		for(i=1; i<=n; i++){
			S3 += (float)pow((-1),i)*(pow(x,i)/s);
			s *= i;	
		}
		printf("S3 = %.2f", S3);
	return 0;
}
