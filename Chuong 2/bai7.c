#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, d;
	printf("Nhap a va b va c: "); scanf("%f%f%f", &a, &b, &c);
	
		if(a==0){
	if(b==0 && c!=0) printf("Phuong trinh vo nghiem");
	else if(b==0 && c==0) printf("Phuong trinh vo so nghiem");
	else printf("phuong trinh co nghiem x = %.2f", -c/b);
				}
		else {
	d = b*b-4*a*c;
	if(d<0) printf("Phuong trinh vo nghiem");
	else if(d==0) printf("Phuong trinh co nghiem kep x1 = x2 = %.2f", -b/2*a);
	else printf("Phuong trinh co 2 nghiem x1 = %.2f   x2= %.2f", (-b + sqrt(d))/(2*a), (-b - sqrt(d))/(2*a));
			}
	return 0;
}
