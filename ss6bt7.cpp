#include<stdio.h>
int main()
{
	int n;
	do{
	
		printf("moi nhap vao so nguyen n: ");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("%d ",i);
		}
	}
	return 0;
}
