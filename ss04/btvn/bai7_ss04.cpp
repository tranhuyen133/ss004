#include<stdio.h>
int main(){
	int basicSalary=5000000,Salary,workDay=26,realWorkday,rewardSalary;
	printf("Nhap so ngay cong thuc te:");
	scanf("%d",&realWorkday);
	if(realWorkday>workDay){
		rewardSalary=basicSalary*((realWorkday-workDay)/(float)workDay)*150/100;
		printf("Luong cua ban la: %d\n ",Salary=basicSalary+rewardSalary);		
	}else{
		Salary=basicSalary*(realWorkday / (float)workDay);
		printf("Luong cua ban la: %d\n ",Salary);
	}
}
