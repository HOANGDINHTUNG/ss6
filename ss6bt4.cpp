#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c, delta,x1,x2;
	printf("moi nhap a: ");
	scanf("%d",&a);
	printf("moi nhap b: ");
	scanf("%d",&b);
	printf("moi nhap c: ");
	scanf("%d",&c);
	delta=b*b-4*a*c;
	if(a==0){
		if(b==0&&c==0){
			printf("phuong trinh co vo so nghiem");
		}else{
		x1=-c/b;
		printf("phuong trinh co 1 nghiem duy nhat la x1 = %d",x1);
	}
	}else if(delta==0){
		x1=-b/(2*a);
		printf("phuong trinh co nghiem kep x1 = x2 = %d",x1);
		
	}else if(delta>0){
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("phuong trinh co 2 nghiem phan biet:\nx1 = %d\nx2 = %d",x1,x2);
	}else{
		printf("phuong trinh vo nghiem");
	}
	return 0;
		
	}
