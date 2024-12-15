#include<stdio.h>
int main(){
	int day, month, year, index=0;
		printf("moi nhap vao ngay: ");
		scanf("%d",&day);
		printf("moi nhap vao thang: ");
		scanf("%d",&month);
		printf("moi nhap vao nam: ");
		scanf("%d",&year);
		if(year>0){
			//TH: NAM NHUAN
			if(year%4==0&&year%100!=0||year%400==0){
				if(month==2){
					if(day<1||day>29){
						index = 0;
					}
					else{
						index = 1;
					}
				}
				else if(month==4||month==6||month==9||month==11){
					if(day<1||day>30){
						index = 0;
					}
					else{
						index = 1;
					}
				}
				else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
					if(day<1||day>31){
						index = 0;
					}
					else{
						index = 1;
					}
				}
				else{
					index = 0;
				}
			}//TH: NAM KHONG NHUAN
			else{
				if(month==2){
					if(day<1||day>28){
						index = 0;
					}
					else{
						index = 1;
					}
				}
				else if(month==4||month==6||month==9||month==11){
					if(day<1||day>30){
						index = 0;
					}
					else{
						index = 1;
					}
				}
				else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
					if(day<1||day>31){
						index = 0;
					}
					else{
						index = 1;
					}
				}
				else{
					index = 0;
				} 
			}
		}
		else{
			index = 0;
		}
		if(index==0){
			printf("ngay %d thang %d nam %d khong ton tai,vui long nhap lai!!!!",day,month,year);
		}
		else{
			if(day>=21&&month==3||day<=20&&month==4)
			{
				printf("cung BACH DUONG");
			}
			else if(day>=21&&month==4||day<=20&&month==5)
			{
				printf("cung KIM NGUU");
			}
			if(day>=21&&month==5||day<=21&&month==6)
			{
				printf("cung SONG TU");
			}
			if(day>=22&&month==6||day<=22&&month==7)
			{
				printf("cung CU GIAI");
			}
			if(day>=23&&month==7||day<=22&&month==8)
			{
				printf("cung SU TU");
			}
			if(day>=23&&month==8||day<=22&&month==9)
			{
				printf("cung XU NU");
			}
			if(day>=23&&month==9||day<=23&&month==10)
			{
				printf("cung THIEN BINH");
			}
			if(day>=24&&month==10||day<=22&&month==11)
			{
				printf("cung BO CAP");
			}
			if(day>=23&&month==11||day<=21&&month==12)
			{
				printf("cung NHAN MA");
			}
			if(day>=22&&month==12||day<=19&&month==1)
			{
				printf("cung MA KET");
			}
			if(day>=20&&month==1||day<=18&&month==2)
			{
				printf("cung BACH DUONG");
			}
			if(day>=19&&month==2||day<=20&&month==3)
			{
				printf("cung BACH DUONG");
			}
		}
		return 0;
	}
