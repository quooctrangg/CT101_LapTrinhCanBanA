#include <stdio.h>

int UCLN(int a, int b){
	if (a*b == 0){
		return a+b;
	}
	
	if (a*b != 0){
		if ( a > b){
			return UCLN(a-b, b);
		} else return UCLN(a, b-a);
	}
}

struct PS {
	int tu;
	int mau;
};


struct PS Nhap() {
	struct PS n;
	printf("\nNhap tu so: ");
	scanf("%d", &n.tu);
	printf("\nNhap mau so: ");
	scanf("%d", &n.mau);
	return n; 
}

void HienThi(struct PS a){
	printf("\n%d/%d", a.tu , a.mau  );
}
struct PS RutGon(struct PS a){
	struct PS c;
	c.tu = a.tu / UCLN(a.tu, a.mau);
	c.mau = a.mau / UCLN(a.tu, a.mau);
	return c;
}

int main () {
 	struct PS a;
 	//a
 	printf("\nNhap tu va mau: ");
 	a = Nhap();
 	//b
 	printf("\nTruoc khi rut gon: ");
 	HienThi(a);
 	
 	//c
 	a = RutGon(a);
 	
 	printf("\nSau khi rut gon: ");
 	HienThi(a);
 	
 	return 0;
 	
 	
}
