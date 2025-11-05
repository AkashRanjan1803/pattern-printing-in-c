#include<stdio.h>
int main(){
int n,m;
printf("Enter no. of rows:");
scanf("%d",&n);
printf("Enetr no. of colums:");
scanf("%d",&m); 

for(int i=1;i<=n;i++){
	for(int j=1;i<=m;j++){
	printf("*");
	}
printf("\n");
}
return 0;
}
