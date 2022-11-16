#include<stdio.h>
int main(){
	int n, i=1, x, y;
	float T=0, t, tmax=0, tmin=10;
	printf("Nhap so mon thi cua sinh vien: "); scanf("%d", &n);
	do {
		printf("Nhap diem mon %d: ", i); scanf("%f", &t);
		T += t;
			if(t > tmax) {
				tmax = t;
				x = i;
			}
			if(t < tmin) {
				tmin = t;
				y = i;
			}
		i++;	
	} 
	while (i <= n);
		printf("Diem trung binh: %.2f\n", T/n);
		printf("Diem cao nhat la mon thu %d : %.2f\n", x, tmax);
		printf("Diem thap nhat la mon thu %d : %.2f\n", x, tmin);
	
	return 0;
}
