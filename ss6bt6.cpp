#include<stdio.h>
int main(){
	for(int i=1;i<=100;i++){
		if(i%3==0&&i%5==0){
			printf("FizzBuzz ");
			i++;
		}
		else if(i%3==0){
			printf("Fizz ");
			i++;
		}
		else if(i%5==0){
			printf("Buzz ");
			i++;
		}
	
		printf("%d ",i);
	}
	return 0;
}
