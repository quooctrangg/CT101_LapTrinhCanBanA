#include<stdio.h>
void phanso(int a, int b){
	do {
		scanf("%d/%d", &a, &b);
		if(b==0) printf("Nhap sai");
	} while (b==0);
	int x = a;
	int y = b;
	int u;
		if(a==0) printf("Ket qua la 0");
		else {
			while(x!=y){
				if(x>y) x-=y;
				else if(x<y) y-=x;
			}
		u = x;	
		} 
		printf("Ket qua la %d/%d", a/u, b/u);
}
int main(){
	int i, j;
	phanso(i,j);
	return 0;
}
