#include<stdio.h>
#define MAX 100
void NhapMaTran(int a[][MAX], int m, int n){
	int i, j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			printf("Nhap vao ma tran a[%d][%d]: ", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
}
void InMaTran(int a[][MAX], int m, int n){
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%.d\t", a[i][j]);
		}
			printf("\n");
	}
}
void Timkiem(int a[][MAX], int m, int n){
	int i, j, temp=0;
	int h;
	printf("Nhap so can tim kiem: "); scanf("%d", &h);
	printf("Phan tu trung o vi tri: ");
		for(i=0;i<m;i++)
			for(j=0;j<n;j++){
			if(a[i][j]==h) {
				printf("a[%d][%d] ", i+1,j+1);
				temp++;
			}
		}
	printf("Co %d phan tu trung.\n", temp);
}
void Tong(int a[][MAX], int s[][MAX], int x[][MAX], int m, int n){
	int i, j;
	for(i=0;i<m;i++)
			for(j=0;j<n;j++){
				x[i][j] = a[i][j] + s[i][j];
			}		
}
int main(){
	int b, c;
	int x[MAX][MAX], y[MAX][MAX], z[MAX][MAX];
	printf("Nhap hang: "); scanf("%d", &b);
	printf("Nhap cot: "); scanf("%d", &c);
	
	printf("Nhap vao ma tran 1: \n");
	NhapMaTran(x, b, c);
	InMaTran(x, b, c);
	Timkiem(x, b, c);
	
	printf("Nhap vao ma tran 2: \n");
	NhapMaTran(y, b, c);
	InMaTran(y, b, c);
	
	printf("Tong cua ma tran 1 va 2: \n");
	Tong(x,y,z,b,c);
	InMaTran(z,b,c);
	return 0;
}

