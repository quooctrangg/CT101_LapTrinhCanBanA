#include<stdio.h>
int UCLN(int a, int b){
	if(a%b==0) return b;
	else return UCLN(a,a%b);
}
int BCNN(int a, int b){
	return (a*b)/UCLN(a,b);
}
int main(){
	int x, y;
	printf("Nhap a: "); scanf("%d", &x);
	printf("Nhap b: "); scanf("%d", &y);
	printf("\nUoc chung lon nhat: %d", UCLN(x,y));
	printf("\nBoi chung nho nhat: %d", BCNN(x,y));
	return 0;
}
