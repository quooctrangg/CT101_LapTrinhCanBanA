#include<stdio.h>
int main(){
	float a, b;
	printf("Nhap a va b: "); scanf("%f%f", &a, &b);
	if(a==0 && b!=0) printf("Phuong trinh vo nghiem");
	else if(a==0 && b==0) printf("Phuong trinh vo so nghiem");
	else printf("phuong trinh co nghiem x = %.2f", -b/a);
	return 0;
}
