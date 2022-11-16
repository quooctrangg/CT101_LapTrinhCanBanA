#include<stdio.h>
int main(){
	int n, i, s=1;
	float S2 =0;
	printf("Nhap n = "); scanf("%d", &n);
		for(i=1; i<=n; i++){
			s *= i;
				S2 += (float)1/s;
			}
		printf("S2 = %.2f", S2);
		
	
	return 0;
}
