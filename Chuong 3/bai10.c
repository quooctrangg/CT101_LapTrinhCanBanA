#include<stdio.h>
#include<math.h>
int main(){
	int n, k = 0;
		printf("Nhap n: "); scanf("%d", &n);
		while(pow(2,k)<n){
			k++;	
		} printf("k thoa man la: %d", k);
	return 0;
}
