#include <stdio.h>
int F(int n){
	int i;
	if(n==0 || n==1) return 1;
	else return F(n-1) + F(n-2);	
}

int main(){
	int x, i = 0;
	printf("Nhap n: "); scanf("%d", &x);
	
	for ( i; i <= x; i++){
		printf("%d\t", F(i));
	}
	return 0;
}
