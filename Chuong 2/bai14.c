#include<stdio.h>
int main() {
	float sc, sm, tt, st;
	printf("Chi so dien sinh hoat cu: "); scanf("%f", &sc);
	printf("Chi so dien sinh hoat moi: "); scanf("%f", &sm);
		tt = sm - sc;
	printf("So kwh tieu thu la: %.2f\n", tt);
		if(tt > 0 && tt <= 50) printf("So tien phai dong la: %.2f VND\n", tt * 1.549);
		else if(tt >= 51 && tt <= 100) printf("So tien phai dong la: %.2f VND\n", tt * 1.600);
		else if(tt >= 101 && tt <= 200) printf("So tien phai dong la: %.2f VND\n", tt * 1.858);
		else if(tt >= 201 && tt <= 300) printf("So tien phai dong la: %.2f VND\n", tt * 2.340);
		else if(tt >= 301 && tt <= 400) printf("So tien phai dong la: %.2f VND\n", tt * 2.615);
		else if(tt >= 401) printf("So tien phai dong la: %.2f VND\n", tt * 2.701);
	
	return 0;
}
