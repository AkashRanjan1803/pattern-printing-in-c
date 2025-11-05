#include<stdio.h>
int main(){
int n,m;
printf("Enter no. of rows");
scanf("%d",&n);
printf("Enter no. of colums");
scanf("%d",&m);

for(int i=1;i<=n;i++){
	for(int j=1;i<=m;j++){
	printf("%d",i);
	}
	printf("\n");
}
return 0;
}
