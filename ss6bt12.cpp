#include<stdio.h>
int main(){
	int n, x=0, y=1, z;
	do{
		printf("moi nhap so nguyen duong n: ");
		scanf("%d",&n);
		
	}while(n<0);
	printf("%d so fibonaci dau tien la: ",n);
	printf("%d ",x);
	printf("%d ",y);
	for(int i=3;i<=n;i++){
		z=x+y;
		x=y;
		y=z;
		printf("%d ",z);
	}
}
