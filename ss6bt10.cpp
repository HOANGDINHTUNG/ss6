#include<stdio.h>
#include<math.h>
int main()
{
	int isprime;
	do{
		printf("moi nhap vao so nguyen duong : ");
		scanf("%d",&isprime);
		if (isprime< 0) 
            printf("Vui long nhap so nguyen DUONG!\n");
	}
	while(isprime<0);
	if(isprime==0||isprime==1){
		printf("so nay khong phai la so nguyen to!!!");
	}
	for(int n=2;n<=sqrt(isprime);n++)
	{
		if(isprime%n==0){
			printf("%d khong la so nguyen to!!!! ",isprime);
			return 0;
		}
		
	}
	printf("%d la so nguyen to!!!! ",isprime);
	return 0;
	
}
