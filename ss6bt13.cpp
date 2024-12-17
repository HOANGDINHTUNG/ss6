#include <stdio.h>

int main() {
    int day, month, year,index;

    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

    int daysInFeb = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 29 : 28;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (day >= 1 && day <= 31) {
                index=1;
            } else {
                printf("ngay %d thang %d nam %d khong ton tai,vui long nhap lai!!!!",day,month,year);
            }
            break;
        case 4: case 6: case 9: case 11:
            if (day >= 1 && day <= 30) {
                index=1;
            } else {
                printf("ngay %d thang %d nam %d khong ton tai,vui long nhap lai!!!!",day,month,year);
            }
            break;
        case 2:
            if (day >= 1 && day <= daysInFeb) {
                index=1;
            } else {
                printf("ngay %d thang %d nam %d khong ton tai,vui long nhap lai!!!!",day,month,year);
            }
            break;
        default:
            printf("ngay %d thang %d nam %d khong ton tai,vui long nhap lai!!!!",day,month,year);
    		
    }
   	if(index==1){
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
			printf("cung BAO BINH");
		}
		if(day>=19&&month==2||day<=20&&month==3)
		{
			printf("cung SONG NGU");
		}
		
	}
	return 0;
}

				
			
				
