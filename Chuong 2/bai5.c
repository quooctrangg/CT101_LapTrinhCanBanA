#include<stdio.h>
int main(){
	float a, b, c, min, max;
		printf("Nhap VDV1: "); scanf("%f", &a);
		printf("Nhap VDV2: "); scanf("%f", &b);
		printf("Nhap VDV3: "); scanf("%f", &c);
	printf("------------------------------\n");
		if(a < b && a < c) {
			max = a;
			if(b > c) min = b;
			else min = c; 
			}
		else if(b < a && b < c) {
			max = b;
			if(a > c) min = a;
			else min = c;
			}
		else if(c < a && c < b) {
			max = c;
			if(b > a) min = b;
			else min = a;
			}
	if(max == a) printf("VDV1 dat thanh tich tot nhat\n Duoc thi dau quoc gia\n");
	else if(max == b) printf("VDV2 dat thanh tich tot nhat\n Duoc thi dau quoc gia\n");
	else if(max == c) printf("VDV3 dat thanh tich tot nhat\n Duoc thi dau quoc gia\n");
	printf("\n");
	
		if(min == a) printf("VDV1 dat thanh tich thap nhat\n Xuong tap luyen voi doi tre\n");
		else if(min == b) printf("VDV2 dat thanh tich thap nhat\n Xuong tap luyen voi doi tre\n");
		else if(min == c) printf("VDV3 dat thanh tich thap nhat\n Xuong tap luyen voi doi tre\n");
		
	return 0;
}
