#include<stdio.h>
int main(){
	float LT, TH1, TH2, TH3, TH4, tong;
		printf("Nhap diem ly thuyet: "); scanf("%f", &LT);
		printf("Nhap diem thuc hanh 1: "); scanf("%f", &TH1);
		printf("Nhap diem thuc hanh 2: "); scanf("%f", &TH2);
		printf("Nhap diem thuc hanh 3: "); scanf("%f", &TH3);
		printf("Nhap diem thuc hanh 4: "); scanf("%f", &TH4);
			tong = (LT + TH1 + TH2 + TH3 + TH4)/5;
		
		if(tong>=0 && tong <=10){
			printf("tong = %.2f\n", tong);
			if(tong>=4) printf("Da dat mon hoc nay");
			else printf("Khong dat mon hoc nay");
} 		else printf("Nhap sai");
	return 0;
}
