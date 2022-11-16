#include<stdio.h>
int main(){
	int n, i, temp=0;
	printf("Nhap n: "); scanf("%d", &n);
	for(i=1;i<n;i++){
		if(n%i==0) temp += i;
	}
	if(temp == n) printf("So %d la so hoan thien.", n);
	else printf("So %d khong phai so hoan thien.", n);
	return 0;
}
