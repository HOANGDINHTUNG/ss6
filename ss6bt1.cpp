#include<stdio.h>
int main(){
	int sum=0;
	printf("moi nguoi dung nhap 3 so nguyen bat ki : \n");
	for(int i=1;i<=5;i++){
		int n;
		printf("moi nhap vao : ");
		scanf("%d",&n);
		if(n%2!=0){
			sum+=n;
		}
	}
	printf("tong cac so le trong 5 so vua nhap la : %d",sum);
}
