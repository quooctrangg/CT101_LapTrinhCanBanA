#include<stdio.h>
int main(){
	int n, i =1;
	float t, T = 0;
	printf("Nhap so thanh vien trong doi: "); scanf("%d", &n);
	while (i <= n){
	
		printf("Nhap thoi gian thanh vien %d: ", i); scanf("%f", &t);
		T += t;
		i++;
	}
	printf("Tong thoi gian cua ca doi la: %.2f\n", T);
	printf("Trung binh thoi gian la: %.2f\n", T/n);
	
	
	return 0;
}
