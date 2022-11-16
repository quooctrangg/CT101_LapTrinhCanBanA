#include<stdio.h>
#include<string.h>
#define MAX 100
char P(char n[MAX]){
	int i;
	for(i=0;i<=strlen(n)/2;i++){
		if(n[i] == n[strlen(n)-i-1]) return 1;
		else return 0;
	}
}

void daonguoc(char n[MAX]){
	char x[strlen(n)];
	int j;
	int f = strlen(n)-1;
	
	for(j=0;j<=f/2;j++){
		char temp = n[j];
		n[j] = n[f-j-1];
		n[f-j-1] = temp;
	}
	printf("%s", n);
} 


int main(){
	char i[MAX];
	printf("Nhap vao chuoi: "); fgets(i,500,stdin);
	if(P(i)==1) printf("Yes\n");
	else printf("No\n");
	daonguoc(i);
	return 0;
}
