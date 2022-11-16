#include<stdio.h>
int main(){
	float f, c;
	printf("Nhap nhiet do F: "); scanf("%f", &f);
	c = (f-32)*5/9;
	printf("Nhiet do C la: %.2f\n", c);
	return 0;
}
