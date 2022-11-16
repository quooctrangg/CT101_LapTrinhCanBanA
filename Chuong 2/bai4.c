#include<stdio.h>
int main(){
	float LT, TH1, TH2, TH3, TH4, tong;
		printf("Nhap diem ly thuyet: "); scanf("%f", &LT);
		printf("Nhap diem thuc hanh 1: "); scanf("%f", &TH1);
		printf("Nhap diem thuc hanh 2: "); scanf("%f", &TH2);
		printf("Nhap diem thuc hanh 3: "); scanf("%f", &TH3);
		printf("Nhap diem thuc hanh 4: "); scanf("%f", &TH4);
			tong = LT + TH1 + TH2 + TH3 + TH4;
		
		if(tong>=0 && tong <=10){
			printf("tong = %.2f\n", tong);
			if(tong>=9) printf("Diem A");
			else if(tong>=8 && tong<9) printf("Diem B+");
			else if(tong>=7 && tong<8) printf("Diem B");
			else if(tong>=6 && tong<7) printf("Diem C+");
			else if(tong>=5 && tong<6) printf("Diem C");
			else if(tong>=4.5 && tong<5) printf("Diem D+");
			else if(tong>=4 && tong<4.5) printf("Diem D");
			else printf("Diem F");
} 		else printf("Nhap sai");
	return 0;
}
