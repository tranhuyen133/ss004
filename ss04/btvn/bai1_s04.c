#include <iostream>
int main (){
 int number;
  printf("Nhap vao mot so nguyen: ");
  scanf("%d", &number);
  if(number%3==0 && number%5==0 ){
  	printf("%la so chia het cho 3 va 5, number%3, number%5 ");
  	}else{
  	printf("%la so khong chia het cho 3 va 5, number%3, number%5 ");
	  }
}
 
