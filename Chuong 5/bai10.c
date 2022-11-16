#include<stdio.h>
int Ackermann(m,n)
{
if(m==0) return n+1;
else if(n==0) return  Ackermann(m-1,1);
else return Ackermann(m-1,Ackermann(m,n-1));
}
int main(){
	int a, b;
	printf("Nhap a va b: "); scanf("%d%d", &a, &b);
	printf("Ket qua la: %d", Ackermann(a,b));
	return 0;
}
