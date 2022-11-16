#include<stdio.h>
void VDV(float x[], int N){
	int i;
		for(i=0;i<N;i++){
			printf("Thoi gian thi dau cua VDV %d: ", i+1); scanf("%f", &x[i]);
		}
}
float Time(float x[], int N){
	int i;
	float o=0;
		for(i=0;i<N;i++){
			o+=x[i];
	} return o;
}
float TimeTB(float x[], int N){
	float TB;
		TB = Time(x,N)/N; 
		return TB;
}
void Max(float x[], int N){
	int i, l;
	float m=0;
		for(i=0;i<N;i++){
			if(x[i]>m){
				m = x[i];
				l = i+1;
			} 
		} printf("VDV %d co thoi gian thi dau tot nhat: %.2f\n", l, m);
} 
void Min(float x[], int N){
	int i, k;
	float M=100;
		for(i=0;i<N;i++){
			if(x[i]<M) {
				M = x[i];
				k = k+1;
			} 
		} printf("VDV %d co thoi gian thi dau kem nhat: %.2f\n", k, M);
} 
int main(){
	int n;
	printf("Nhap so thanh vien trong doi: "); scanf("%d", &n);
	float a[n];
	VDV(a,n);
	printf("Tong thoi gian ca doi: %.2f\n", Time(a,n));
	printf("Trung binh thoi gian ca doi: %.2f\n", TimeTB(a,n));
	Max(a,n);
	Min(a,n);	
	return 0;
}
