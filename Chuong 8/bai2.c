#include<stdio.h>
#include<string.h>
void xoakytu(char *s, int i){
	int j=0, n=strlen(s);
	for(j=i;j<n;j++)
			s[j] = s[j+1];
			s[n--]='\0';
}
void xoatrung(char *s){
	int i, j, n=strlen(s);
	for(i=0;i<n;i++){
		if(s[i]== ' '){
			xoakytu(s,i);
			i=i-1;	
			}	
		else 
			for(j=i+1;j<n;j++)
				if(s[i]==s[j]) 
					xoakytu(s,j); 
		}
//	puts(s);
}
int dem(char *s, char *s1){
	int n = strlen(s);
	int n1 = strlen(s1);
	int dem = 0, tong = 0;
	int j, i;
	for(i=0;i<n1;i++){
		for(j=0;j<n;j++){
			if(s1[i] == s[j]){
				dem = dem + 1;
			}
			if(dem > 1){
				tong = tong + dem;
				dem = 0;
			}
		}
	}
	return tong;
}
int main(){
	char a[30], b[30];
	printf("Nhap chuoi: "); 
	gets(a);
	strcpy(b,a);
	xoatrung(b);
	int tong = dem(a,b);
	printf("Chuoi sau khi ma hoa: %d %s\n", tong, strlwr(b));
	return 0;
}
