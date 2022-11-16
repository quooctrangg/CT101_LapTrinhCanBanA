#include <stdio.h>
int F(int n){
	if(n == 0) return 0;
	else if(n == 1) return 1;
	else return (F(n - 1) + F(n - 2));
}

int main(){
	int x;
	printf("Nhap n: "); scanf("%d", &x);
	
		printf("So hang thu %d cua day Fibonacci la %d", x, F(x));
	
	return 0;
}
