#include<stdio.h>
int Ucln(int a, int b){
	if(a%b==0) return b;
	else return Ucln(b,a%b);
}
int Bcnn(int a, int b){
	return (a*b)/Ucln(a,b);
}
int main(){
	int a, b;
	printf("Nhap a: "); scanf("%d", &a);
	printf("Nhap b: "); scanf("%d", &b);
		printf("Boi chung nho nhat cua %d va %d la: %d", a, b, Bcnn(a,b));
	return 0;
}
