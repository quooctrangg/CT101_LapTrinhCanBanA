#include <stdio.h>

struct SoPhuc {
	float thuc;
	float ao;	
};

struct SoPhuc Nhap(){
	struct SoPhuc k;
	printf("\nNhap phan thu: ");
	scanf("%f", &k.thuc);
	printf("\nNhap phan ao: ");
	scanf("%f", &k.ao);
	return k;
}

void HienThi(struct SoPhuc n){
	printf("\n%.2f + i%.2f", n.thuc, n.ao);
}

void Sum(struct SoPhuc *c,struct SoPhuc a,struct SoPhuc b ){
	
	c->thuc = a.thuc + b.thuc;
	c->ao = a.ao + b.ao;
	
}



int main () {
	struct SoPhuc a,b,c;
	printf("\nNhap so phuc a: ");
	a = Nhap();
	printf("\nNhap so phuc b: ");
	b = Nhap();
	printf("\n=============||============");
	HienThi(a);
	HienThi(b);
	
	Sum(&c, a,  b);
	
	HienThi(c);
	
	return 0;
	
}

