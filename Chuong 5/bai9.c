#include<stdio.h>
int C(int n, int k){
	if(k == n || k == 0) return 0;
	else if(k==1) return n;
	else return (C(n-1,k-1) + C(n-1,k));
}
int main(){
	int i, j;
	printf("Nhap n:"); scanf("%d", &i);
	printf("Nhap k:"); scanf("%d", &j);
	printf("Ket qua cua S: %d", C(i,j));
	return 0;
}
