#include<stdio.h>
int main(){
	float sum=0,i=1;
	int S;
	printf("Nhap S: "); scanf("%d", &S);
	
	while(sum<S){
		sum += (1/i);
		i++;
	}
	
	printf("n thoa man la: %d", (int)i-1);
	return 0;
}
