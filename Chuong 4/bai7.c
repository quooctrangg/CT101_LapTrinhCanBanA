#include<stdio.h>
#include<math.h>
int main(){
	int n, i, chan = 0, j=0;
	float le = 0;
	int temp;
	do {
		temp = 0;
		do{
		printf("Nhap n: "); scanf("%d", &n);
		} while(n <= 0);
		
		for(i=2;i<=sqrt(n);i++) if(n % i == 0) temp++;
			
		if(n%2==0) chan += n;
		else {
			le += n;
			j++;
		} 
	} while (temp != 0);
		printf("\nTong cac so chan la: %d", chan);
		printf("\nTrung binh cong so le: %.2f", le/j);
	return 0;
}
