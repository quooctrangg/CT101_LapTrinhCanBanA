#include<stdio.h>
int main(){
	float Pi = 3.14;
	float R, chuvi, dientich, r;
	scanf("%f", &R);
		r = R / 2;
		chuvi = R * Pi;
		dientich = r*r*Pi;
	printf("chu vi = %.2f  dien tich: %.2f", chuvi, dientich);
		
	return 0;
}
