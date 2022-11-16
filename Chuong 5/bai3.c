#include<stdio.h>
void N(int n){
	int i;
	for(i = 2;i <= n;i++){
		while(n % i==0){
		printf("%d ", i);
		n /= i;
		}
	}
}
int main(){
	int x;
	printf("Nhap n: "); scanf("%d", &x);
	N(x);
	return 0;
}
