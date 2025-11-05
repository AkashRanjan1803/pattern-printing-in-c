#include<stdio.h>
int main(){
int n,m;
printf("Enter no. of rows:\n");
scanf("%d",&n);
printf("Enter no. of columns:\n");
scanf("%d",&m);


for(int i=1;i<=n;i++){
	char ch = 'A';
	for(int j=1;j<=m;j++){
	printf("%c",ch);
	ch++;
	}
	printf("\n");
}
return 0;
}
