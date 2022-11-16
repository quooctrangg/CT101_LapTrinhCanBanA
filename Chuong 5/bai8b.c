#include<stdio.h>
#include<math.h>
float B(int x, int n){
	float j=0;
	if(n==0) return 1;
	else return (float)pow(sin(x),n) + B(x,n-1);
}
int main(){
	int i, j;
	printf("Nhap x:"); scanf("%d", &i);
	printf("Nhap n:"); scanf("%d", &j);
	printf("Ket qua cua S2: %.2f radian.", B(i,j));
	return 0;
}
