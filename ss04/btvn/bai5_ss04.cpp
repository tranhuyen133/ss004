#include <stdio.h>
main(){
	int day, month, year;
	printf("Nhap ngay, thang, nam: ");
	scanf("%d%d%d",&day,&month,&year);
	if(month<1||month>12||year<1){
		printf("Khong co thang nay");
	}
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(day<0||day>31){
				printf("Khong co ngay nay");
			}
			break;	
		case 4:
		case 6:
		case 9:
		case 11:
			if(day<0||day>30){
				printf("Khong co ngay nay");
			}
			break;
		case 2:
			if(year%4==0){
				if(day<0||day>29){
					printf("Khong co ngay nay");
				}else{
					if(day<0||day>28){
						printf("Khong co ngay nay");
					}
				}
			}
			break;
	}
	printf("Ngay %d thang %d nam %d",day,month,year);
}
	
