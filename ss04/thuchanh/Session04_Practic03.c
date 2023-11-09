#include <stdio.h>
int main(){

  int number1, number2;
  char calculation;
  printf("Nhap vao 2 so nguyen: ");
  scanf("%d %d", &number1, &number2);
  fflush(stdin); 
  printf("Nhap vao phep tinh: ");
  calculation = getchar();
 
  switch(calculation) {
    case '+':
      printf("Tong %d va %d la: %d\n", number1, number2, number1 + number2);
    break;
    case '-':
      printf("Hieu %d va %d la: %d\n", number1, number2, number1 - number2);
      break;
    case '*':
      printf("Tich %d va %d la: %d\n", number1, number2, number1 * number2);
      break;
    case '/':
        printf("Thuong %d va %d la: %d\n", number1, number2, number1 / number2);
      break;
    case '%':
      printf("So du trong phep chia %d cho %d la: %d\n", number1, number2, number1 % number2); 
      break;
    default:
      printf("Phep tinh khong phu hop!!!");
  }
}
