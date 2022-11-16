#include<stdio.h>
void Diemchu(float N){
		if(N>=9) printf("Diem A\n");
		else if(N>=8 && N<9) printf("Diem B+\n");
		else if(N>=7 && N<8) printf("Diem B\n");
		else if(N>=6.5 && N<7) printf("Diem C+\n");
		else if(N>=6 && N<6.5) printf("Diem C\n");
		else if(N>=5 && N<6) printf("Diem D+\n");
		else if(N>=4 && N<5) printf("Diem D\n");
		else if(N<4) printf("Diem F\n");
}
void Sinhvien(float N[], int i){
	int k;
	for(k=0;k<i;k++){
			printf("Nhap sinh vien thu %d: ", k+1);
			scanf("%f", &N[k]);
			Diemchu(N[k]);
	}
}
float Max(float N[], int i){
	int k;
	float max = N[0];
	for(k=0;k<i;k++){
		if(max < N[k]) max = N[k];
	} return max;
}
float Min(float N[], int i){
	int k;
	float min = N[0];
	for(k=0;k<i;k++){
		if(min > N[k]) min = N[k];
	} return min;
}
float DiemTB(float N[], int i){
	int k;
	float tong;
	for(k=0;k<i;k++){
		tong += N[k];
	} return tong/i;
}
int main(){
	int i;
	printf("So sinh vien nhap diem: "); scanf("%d", &i);
	float n[i];
	Sinhvien(n,i);
	printf("Diem lon nhat: %.2f\n", Max(n,i));
	printf("Diem nho nhat: %.2f\n", Min(n,i));
	printf("Diem trung binh cua ca lop: %.2f\n", DiemTB(n,i));
	return 0;
}
