#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, chuvi, p, s;
	printf("Nhap 3 canh cua tam giac: ");
	scanf("%f%f%f", &a, &b, &c);
		chuvi = a + b + c;
		p = chuvi / 2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Chu vi = %.2f     Dien tich = %.2f\n", chuvi, s);	
	return 0;
}
