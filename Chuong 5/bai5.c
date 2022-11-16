#include<stdio.h>
int N(int n){
	int i, j=0;
	for(i=1;i<n;i++){
		if(n%i==0) j+=i;
	}
	if(j==n) return 1;
	else return 0;
}
int main(){
	int x;
	printf("Nhap n: "); scanf("%d", &x);
	if(N(x)==1) printf("Yes");
	else printf("No");
	return 0;
}
