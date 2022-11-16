#include<stdio.h>
#include<math.h>
int main(){
	int n, i=2, j;
	int temp;
	printf("Nhap n: "); scanf("%d", &n);
		while(i < n){
			temp = 0;
			for(j=2;j<=sqrt(i);j++){
				if(i % j == 0) temp++;
			}
		if(temp==0) printf("%d\t", i);
		i++;	
		}
	return 0;
}
