#include<stdio.h>
int main(){
	int n, i;
	int tong = 0, so = 0;
	printf("Nhap n: "); scanf("%d", &n);
	
	while(n != 0){
		i = n % 10;
		tong += i;
		so++;
		n = n / 10;	
	}
	printf("Co %d chu so.", so);
	printf("Tong cac chu so do: %d", tong);
	return 0;
}
