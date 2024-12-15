#include<stdio.h>
#include<math.h>
int main(){
	float money ,interest, month, money_sum, money_interest;
	printf("moi nhap vao so tien ban gui ngan hang ban dau: ");
	scanf("%f",&money);
	printf("moi nhap vao so lai suat thang: ");
	scanf("%f",&interest);
	printf("moi nhap vao so so thang gui: ");
	scanf("%f",&month);
	money_sum=money*pow((1+interest),month);
	money_interest=money*pow((1+interest),month)-money;
	printf("tien lai %.3f\n",money_interest);
	printf("tien nhan duoc %.3f",money_sum);
	return 0;
}
