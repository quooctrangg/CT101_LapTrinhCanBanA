#include<stdio.h>
float XmuN(float x, int n){
	int i;
	float N=1;
	for(i=1;i<=n;i++){
		N*=x;	
	} return N;
}
int main(){
	float a;
	int b;
	printf("Nhap x: "); scanf("%f", &a);
	printf("Nhap n: "); scanf("%d", &b);
	printf("\nXmuN: %.2f", XmuN(a,b));
	return 0;
}
