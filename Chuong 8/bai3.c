#include<stdio.h>
#include<string.h>
void edit(char str[]){
	while(str[0] == ' ') strcpy(&str[0],&str[1]);
	int i;
	for(i=0;i<=strlen(str)-1;i++){
		if(str[i] == ' ' && str[i+1] == ' ') {
			strcpy(&str[i],&str[i+1]);
			i--;
		}
	}
	while(str[strlen(str)-2] == ' ') strcpy(&str[strlen(str)-2],&str[strlen(str)]);
}
void ten(char str[]){
	int i;
	int n = strlen(str)-2;
	char p[20];
	do{
		strcpy(&str[0],&str[n]);
		n--;
	} while (str[n] != ' ');
}
int main(){
	char st[100];
	fgets(st,100,stdin);
	edit(st);
	printf("\"%s\"\n", st);
	ten(st);
	printf("Ten: %s", st);
	return 0;
}
