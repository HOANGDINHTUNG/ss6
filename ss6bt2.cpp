#include <stdio.h>

int main(){
	int count_even, count_odd;
   	printf("moi nhap vao 5 so nguyen bat ki:\n");
	for(int i=1;i<5;i++){
		int n;
   		scanf("%d\n",&n);
		   if(n%2!=0){
   			count_odd++;
		}
		else{
			count_even++;
		}
   	}
   	printf("so luong so chan la %d\n",count_even);
   	printf("so luong so le la %d", count_odd);
	return 0;
}

