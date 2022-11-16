#include<stdio.h>
#include<math.h>
void Nhapmang(int n[], int i){
	int j;
	for(j=0;j<i;j++){
		printf("Nhap phan tu thu %d: ", j+1); 
		scanf("%d", &n[j]);
	}
}
void Le(int n[], int i){
	int j, temp=0;
	printf("So le: \n");
	for(j=0;j<=i;j++){
		if(n[j] % 2 != 0) {
			temp++;
			printf("%d ", n[j]);
		}
	}  printf("Tong cong co %d so le.\n", temp);
}
void Chan(int n[], int i){
	int j, temp=0;
	printf("So chan: \n");
	for(j=1;j<i;j++){
		if(n[j] % 2 == 0) {
			temp++;
			printf("%d ", n[j]);
		} 
	} printf("Tong cong co %d so chan.\n", temp);
}
void Nguyento(int n[], int i){
	int j, k;
	printf("So nguyen to: \n");
	for(j=0;j<i;j++){
		if(n[j]!=1){
				int temp = 0;
		for(k=2;k<=sqrt(n[j]);k++){
			if(n[j] % k == 0) temp++;
			} 
			if(temp == 0)	printf("%d ", n[j]);
		} 
	} printf("\n");
}
void Sothuong(int n[], int i){
	int j, k;
	printf("Khong phai so nguyen to: \n");
	for(j=0;j<i;j++){
		int temp = 0;
		for(k=2;k<=sqrt(n[j]);k++){
			if(n[j] % k == 0) temp++;
		} 
			if(temp != 0)	printf("%d ", n[j]);
	}
}

int main(){
	int i;
	printf("So phan tu can nhap: "); 
	scanf("%d", &i);
	int a[i];
	Nhapmang(a,i);
	Le(a,i);
	Chan(a,i);
	Nguyento(a,i);
	Sothuong(a,i);
	return 0;
}


