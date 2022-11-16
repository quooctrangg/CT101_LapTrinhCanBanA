#include<stdio.h>
int main(){
	float LT, TH1, TH2, TH3, TH4;
	char Ten[30];
	printf("Nhap ten: "); gets(Ten);
	printf("Diem ly thuyet: "); scanf("%f", &LT);
	printf("Diem thuc hanh 1: "); scanf("%f", &TH1);
	printf("Diem thuc hanh 2: "); scanf("%f", &TH2);
	printf("Diem thuc hanh 3: "); scanf("%f", &TH3);
	printf("Diem thuc hanh 4: "); scanf("%f", &TH4);
	printf("Tong diem cuoi ki: %.2f", LT + TH1 + TH2 + TH3 + TH4);
	return 0;
}
