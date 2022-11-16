#include<stdio.h>
void s(float *a, float *b){
	float t = *a;
		*a = *b;
		*b = t;
}
int main(){
	float x, y;
	printf("Nhap 2 so can hoan doi: ");scanf("%f%f", &x, &y);
	s(&x,&y);
	printf("2 so sau khi hoan doi: %.2f %.2f", x, y);
	return 0;
}
