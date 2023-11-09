#include <stdio.h>
int main(){
	int new_electricity_number,old_electricity_number,money;
	printf("Nhap so moi va cu: ");
	scanf("%d%d",&new_electricity_number,&old_electricity_number);
	int electricity_number=new_electricity_number-old_electricity_number;
	if(0<=electricity_number<50){
		money=electricity_number*10000;
	}else if(electricity_number<100){
		money=electricity_number*15000;
	}else if(electricity_number<150){ 
		money=electricity_number*20000;
    }else if(electricity_number<200){
		money=electricity_number*25000; 
	}else{
		money=electricity_number*30000;
	}
	printf("So tien dien la: %d\n",money);
}
