#include<stdio.h>
int main()
{
	int month, year;
	printf("moi nhap vao thang: ");
	scanf("%d",&month);
	printf("moi nhap vao nam: ");
	scanf("%d",&year);
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		printf("thang %d nam %d co 31 ngay",month, year);
	}
	else if(month==4||month==6||month==9||month==11){
		printf("thang %d nam %d co 30 ngay",month, year);
	}
	else if(month==2){
		if(year%4==0&&year%100!=0||year%400==0){
			printf("thang %d nam %d co 29 ngay",month, year);
		}
		else{
			printf("thang %d nam %d co 28 ngay",month, year);
		}
	}
}
