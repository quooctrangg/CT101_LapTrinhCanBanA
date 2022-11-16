#include<stdio.h>
int Daonguoc(int n){
	int i;
	if (n==0) return 0;
	else {
		i = n % 10;
		n = n / 10;
		printf("%d", i);
 	} return Daonguoc(n); 
}
int main(){
	int a, j;
	//cach de qui
	scanf("%d", &a);
	Daonguoc(a);
	printf("\n\n");
	// cach khong de quy
	while(a!=0){
		j = a % 10;
		a = a / 10;
		printf("%d", j);
	}
	return 0;
}
