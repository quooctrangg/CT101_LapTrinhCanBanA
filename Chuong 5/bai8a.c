#include<stdio.h>
float A(int n){
	if(n==0) return 0;
	else return (float)1/n + A(n-1);
}
int main(){
	int a;
	printf("Nhap n:"); scanf("%d", &a);
	printf("Ket qua cua S1: %.2f", A(a));
	return 0;
}
